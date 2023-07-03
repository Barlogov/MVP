using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;
using Joint = Windows.Kinect.Joint;

public class IK_BodyTracking : MonoBehaviour
{
    public Material BoneMaterial;
    public GameObject BodySourceManager;
    public GameObject modelPref;

    private Dictionary<ulong, GameObject> _Bodies = new Dictionary<ulong, GameObject>(); // Points in space
    private Dictionary<ulong, GameObject> _Models = new Dictionary<ulong, GameObject>(); // Mesh in space 
    private BodySourceManager _BodyManager;

    public Dictionary<Kinect.JointType, Kinect.JointType> boneMap = new Dictionary<Kinect.JointType, Kinect.JointType>()
    {
        { Kinect.JointType.FootLeft, Kinect.JointType.AnkleLeft },
        { Kinect.JointType.AnkleLeft, Kinect.JointType.KneeLeft },
        { Kinect.JointType.KneeLeft, Kinect.JointType.HipLeft },
        { Kinect.JointType.HipLeft, Kinect.JointType.SpineBase },

        { Kinect.JointType.FootRight, Kinect.JointType.AnkleRight },
        { Kinect.JointType.AnkleRight, Kinect.JointType.KneeRight },
        { Kinect.JointType.KneeRight, Kinect.JointType.HipRight },
        { Kinect.JointType.HipRight, Kinect.JointType.SpineBase },

        { Kinect.JointType.HandTipLeft, Kinect.JointType.HandLeft },
        { Kinect.JointType.ThumbLeft, Kinect.JointType.HandLeft },
        { Kinect.JointType.HandLeft, Kinect.JointType.WristLeft },
        { Kinect.JointType.WristLeft, Kinect.JointType.ElbowLeft },
        { Kinect.JointType.ElbowLeft, Kinect.JointType.ShoulderLeft },
        { Kinect.JointType.ShoulderLeft, Kinect.JointType.SpineShoulder },

        { Kinect.JointType.HandTipRight, Kinect.JointType.HandRight },
        { Kinect.JointType.ThumbRight, Kinect.JointType.HandRight },
        { Kinect.JointType.HandRight, Kinect.JointType.WristRight },
        { Kinect.JointType.WristRight, Kinect.JointType.ElbowRight },
        { Kinect.JointType.ElbowRight, Kinect.JointType.ShoulderRight },
        { Kinect.JointType.ShoulderRight, Kinect.JointType.SpineShoulder },

        { Kinect.JointType.SpineBase, Kinect.JointType.SpineMid },
        { Kinect.JointType.SpineMid, Kinect.JointType.SpineShoulder },
        { Kinect.JointType.SpineShoulder, Kinect.JointType.Neck },
        { Kinect.JointType.Neck, Kinect.JointType.Head },
    };

    void Update()
    {
        if (BodySourceManager == null)
        {
            return;
        }

        _BodyManager = BodySourceManager.GetComponent<BodySourceManager>();

        if (_BodyManager == null)
        {
            return;
        }

        Kinect.Body[] data = _BodyManager.GetData();

        if (data == null)
        {
            return;
        }

        List<ulong> trackedIds = new List<ulong>();
        foreach (var body in data)
        {
            if (body == null)
            {
                continue;
            }

            if (body.IsTracked)
            {
                trackedIds.Add(body.TrackingId);
            }
        }

        List<ulong> knownIds = new List<ulong>(_Bodies.Keys);

        // First delete untracked bodies
        foreach (ulong trackingId in knownIds)
        {
            if (!trackedIds.Contains(trackingId))
            {
                Destroy(_Bodies[trackingId]);
                _Bodies.Remove(trackingId);
                Destroy(_Models[trackingId]);
                _Models.Remove(trackingId);
            }
        }

        foreach (var body in data)
        {
            if (body == null)
            {
                continue;
            }

            if (body.IsTracked)
            {
                if (!_Bodies.ContainsKey(body.TrackingId))
                {
                    _Bodies[body.TrackingId] = CreateBodyObject(body.TrackingId);
                }

                RefreshBodyObject(body, _Bodies[body.TrackingId], body.TrackingId);
            }
        }
        //kinectMultiplier*= 1.001f;
    }

    public float distSpineToAnkle = 6.5f;
    private GameObject CreateBodyObject(ulong id)
    {

        GameObject body = new GameObject("Body:" + id);

        for (Kinect.JointType jt = Kinect.JointType.SpineBase; jt <= Kinect.JointType.ThumbRight; jt++)
        {
            GameObject jointObj = GameObject.CreatePrimitive(PrimitiveType.Cube);

            LineRenderer lr = jointObj.AddComponent<LineRenderer>();
            lr.SetVertexCount(2);
            lr.material = BoneMaterial;
            lr.SetWidth(0.05f, 0.05f);

            jointObj.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
            jointObj.name = jt.ToString();
            jointObj.transform.parent = body.transform;

            //
            if (jt == Kinect.JointType.Head || jt == Kinect.JointType.Neck)
            {
                GameObject worldText = new GameObject("WorldText", typeof(TextMesh));
                worldText.GetComponent<TextMesh>().fontSize = 40;

                worldText.transform.localScale *= 0.15f;
                //worldText.transform.localPosition = new Vector3(0, Random.Range(-4f, 4f), 0);
                worldText.transform.parent = jointObj.transform;
            }
            //
        }

        GameObject personModel = Instantiate(modelPref);
        personModel.name = ("Model:" + id);
        _Models.Add(id, personModel);
        _kinectMaxDist.Add(id, new Vector3(0f, 0f, 0f));
        _kinectLength.Add(id, new Vector3(0f, 0f, 0f));
        //personModel.transform.parent = body.transform;


        IK_ModelController modelController = personModel.GetComponent<IK_ModelController>();

        // --------------------------------
        // ----- Assigning Targets -------- 
        // --------------------------------

        // LEFT FOOT
        modelController.pole_KneeLeft = body.transform.Find("KneeLeft");
        modelController.target_AnkleLeft = body.transform.Find("AnkleLeft");

        modelController.target_FootLeft = body.transform.Find("FootLeft");

        // RIGHT FOOT
        modelController.pole_KneeRight = body.transform.Find("KneeRight");
        modelController.target_AnkleRight = body.transform.Find("AnkleRight");

        modelController.target_FootRight = body.transform.Find("FootRight");

        // LEFT HAND
        modelController.target_ShoulderLeft = body.transform.Find("ShoulderLeft");

        modelController.pole_ElbowLeft = body.transform.Find("ElbowLeft");
        modelController.target_WristLeft = body.transform.Find("WristLeft");

        modelController.pole_HandLeft = body.transform.Find("HandLeft");
        modelController.target_HandTipLeft = body.transform.Find("HandTipLeft");

        // RIGHT HAND
        modelController.target_ShoulderRight = body.transform.Find("ShoulderRight");

        modelController.pole_ElbowRight = body.transform.Find("ElbowRight");
        modelController.target_WristRight = body.transform.Find("WristRight");

        modelController.pole_HandRight = body.transform.Find("HandRight");
        modelController.target_HandTipRight = body.transform.Find("HandTipRight");

        // SPINE
        modelController.pole_SpineMid = body.transform.Find("SpineMid");
        modelController.target_SpineShoulder = body.transform.Find("SpineShoulder");

        // HEAD
        modelController.pole_Neck = body.transform.Find("Neck");
        modelController.target_Head = body.transform.Find("Head");

        // INITIALIZATION
        modelController.PareTargetsAndBones();

        return body;
    }

    private void RefreshBodyObject(Kinect.Body body, GameObject bodyObject, ulong id)
    {
        /*
        SyncKinectLength(body, id);
        SetKinectMultiplier(id);
        The calculated difference factor is close to 10, but static 11.4 is better
        */

        for (Kinect.JointType jt = Kinect.JointType.SpineBase; jt <= Kinect.JointType.ThumbRight; jt++)
        {
            Kinect.Joint sourceJoint = body.Joints[jt];
            Kinect.Joint? targetJoint = null;


            Transform jointObj = bodyObject.transform.Find(jt.ToString());
            jointObj.localPosition = GetVector3FromJoint(sourceJoint, id);

            LineRenderer lr = jointObj.GetComponent<LineRenderer>();
            if (targetJoint.HasValue)
            {
                lr.SetPosition(0, jointObj.localPosition);
                lr.SetPosition(1, GetVector3FromJoint(targetJoint.Value, id));
                lr.SetColors(GetColorForState(sourceJoint.TrackingState), GetColorForState(targetJoint.Value.TrackingState));
            }
            else
            {
                lr.enabled = false;
            }

            //
            if (jt == Kinect.JointType.Head || jt == Kinect.JointType.Neck)
            {
                TextMesh WorldText = bodyObject.transform.Find($"{jt.ToString()}/WorldText").GetComponent<TextMesh>(); ;
                WorldText.text = $"x: {body.Joints[jt].Position.X}, y: {body.Joints[jt].Position.Y}, z: {body.Joints[jt].Position.Z}";
            }
            //
        }
        
        GameObject model = _Models[id];
        IK_ModelController modelController= model.GetComponent<IK_ModelController>();
        modelController.SpineBase.transform.position = GetVector3FromJoint(body.Joints[Kinect.JointType.SpineBase], id);
        modelController.HipLeft.transform.position = GetVector3FromJoint(body.Joints[Kinect.JointType.HipLeft], id);
        modelController.HipRight.transform.position = GetVector3FromJoint(body.Joints[Kinect.JointType.HipRight], id);
    }

    private static Color GetColorForState(Kinect.TrackingState state)
    {
        switch (state)
        {
            case Kinect.TrackingState.Tracked:
                return Color.green;

            case Kinect.TrackingState.Inferred:
                return Color.red;

            default:
                return Color.black;
        }
    }


    public Vector3 modelKinectDIF = new Vector3(11.4f, 11.4f, 11.4f); // Differeance between model hight and width and kinect joints    
    private Vector3 GetVector3FromJoint(Kinect.Joint joint, ulong id)
    {
        return new Vector3(joint.Position.X * modelKinectDIF.x, joint.Position.Y * modelKinectDIF.y, joint.Position.Z * modelKinectDIF.z);
    }
    
    private void SetKinectMultiplier(ulong id)
    {
        Vector3 modelLenth = _Models[id].GetComponent<IK_ModelController>().SyncModelLength();
        modelKinectDIF = new Vector3(modelLenth.x / _kinectLength[id].x, modelLenth.y / _kinectLength[id].y, modelLenth.z / _kinectLength[id].z);
        Debug.Log(modelKinectDIF);
    }

    public Dictionary<ulong, Vector3> _kinectMaxDist = new Dictionary<ulong, Vector3>(); // max value between kinect points
    public Dictionary<ulong, Vector3> _kinectLength = new Dictionary<ulong, Vector3>(); // length of kinect points in 3 dimension

    public void SyncKinectLength(Kinect.Body body, ulong id)
    {
        float localKinectDif_X = body.Joints[Kinect.JointType.HandTipRight].Position.X - body.Joints[Kinect.JointType.HandTipLeft].Position.X; // local value between handtips of kinect 
        float localKinectDif_Y = body.Joints[Kinect.JointType.Head].Position.Y - body.Joints[Kinect.JointType.FootRight].Position.Y; // local value between hand and foot of kinect 

        if (localKinectDif_X > _kinectMaxDist[id].x)
        {
            _kinectMaxDist[id] = new Vector3(localKinectDif_X, _kinectMaxDist[id].y, _kinectMaxDist[id].z);
            float z = (_kinectMaxDist[id].x + _kinectMaxDist[id].y) / 2;
            _kinectLength[id] = new Vector3(_kinectMaxDist[id].x, _kinectLength[id].y, z);
        }
        if (localKinectDif_Y > _kinectMaxDist[id].y)
        {
            _kinectMaxDist[id] = new Vector3(_kinectMaxDist[id].x, localKinectDif_Y, _kinectMaxDist[id].z);
            float z = (_kinectMaxDist[id].x + _kinectMaxDist[id].y) / 2;
            _kinectLength[id] = new Vector3(_kinectLength[id].x, _kinectMaxDist[id].y, z);
        }
    }
}