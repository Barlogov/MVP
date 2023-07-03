using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;
using System;
using UnityEngine.UI;

public class StickAndPointsTest : MonoBehaviour
{


    public GameObject BodySourceManager;
    public Text debugText;

    private Dictionary<ulong, GameObject> _Bodies = new Dictionary<ulong, GameObject>();
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

    public GameObject handPref;
    private UnityEngine.Vector3 pos;
    private float scaleMultiplier;
    private GameObject rot;

    private void Start()
    {
        stick.transform.rotation = Quaternion.LookRotation(new Vector3(90, 0, 0), Vector3.up);

        pos = new UnityEngine.Vector3(0, 0, 0);
        scaleMultiplier = 1;
        rot = new GameObject();
    }



    void FixedUpdate()
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

                RefreshBodyObject(body, _Bodies[body.TrackingId]);
                RefreshRotation(body, _Bodies[body.TrackingId]);
            }
        }



    }

    [Space(10)]
    public GameObject stick;
    public GameObject shoulderPoint;
    public GameObject elbowPoint;

    [Space(10)]
    [Header("Joint Transforms: ")]

    public Transform ShoulderRight;
    public Transform ElbowRight;
    public Transform WristRight;
    public Transform HandRight;



    public Vector3 baseRotShoulderRight;
    public Vector3 baseRotElbowRight;
    public Vector3 baseRotWristRight;
    public Vector3 baseRotHandRight;

    public Quaternion baseQuatShoulderRight;


    private GameObject CreateBodyObject(ulong id)
    {
        GameObject body = new GameObject("Body:" + id);

        for (Kinect.JointType jt = Kinect.JointType.ShoulderRight; jt <= Kinect.JointType.HandRight; jt++)
        {
            GameObject jointObj = GameObject.CreatePrimitive(PrimitiveType.Cube);

            jointObj.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
            jointObj.name = jt.ToString();
            jointObj.transform.parent = body.transform;
        }


        return body;
    }

    private void RefreshBodyObject(Kinect.Body body, GameObject bodyObject)
    {
        for (Kinect.JointType jt = Kinect.JointType.ShoulderRight; jt <= Kinect.JointType.HandRight; jt++)
        {
            Kinect.Joint sourceJoint = body.Joints[jt];
            Transform jointObj = bodyObject.transform.Find(jt.ToString());
            jointObj.localPosition = GetVector3FromJoint(sourceJoint);
        }
    }

    private static Vector3 GetVector3FromJoint(Kinect.Joint joint)
    {
        return new Vector3(joint.Position.X * 10, joint.Position.Y * 10, joint.Position.Z * 10);
    }

    public const float DEGREES = 180 / Mathf.PI;
    private void RefreshRotation(Kinect.Body body, GameObject bodyObject)
    {
        float z;
        float y;
        float x;

        Vector3 ShoulderRight_JointV3 = new Vector3(body.Joints[Kinect.JointType.ShoulderRight].Position.X, body.Joints[Kinect.JointType.ShoulderRight].Position.Y, body.Joints[Kinect.JointType.ShoulderRight].Position.Z);
        Vector3 ElbowRight_JointV3 = new Vector3(body.Joints[Kinect.JointType.ElbowRight].Position.X, body.Joints[Kinect.JointType.ElbowRight].Position.Y, body.Joints[Kinect.JointType.ElbowRight].Position.Z);

        // Right Shoulder Z axis
        z = body.Joints[Kinect.JointType.ElbowRight].Position.Z - body.Joints[Kinect.JointType.ShoulderRight].Position.Z;
        y = body.Joints[Kinect.JointType.ElbowRight].Position.Y - body.Joints[Kinect.JointType.ShoulderRight].Position.Y;
        x = body.Joints[Kinect.JointType.ElbowRight].Position.X - body.Joints[Kinect.JointType.ShoulderRight].Position.X;

        stick.transform.rotation = Quaternion.LookRotation(ElbowRight_JointV3 - ShoulderRight_JointV3, Vector3.up);
        //ShoulderRight.Rotate(baseRotShoulderRight);

        //ShoulderRight.eulerAngles = baseRotShoulderRight - DEGREES * new Vector3(0, 0, Mathf.Atan2(y, x));

        // TODO: Создать масив с кубами (джоинтами) и вычеслять углы из их трансформов
        /*
         
         public class ExampleClass : MonoBehaviour
        {
         public Transform target;

         void Update()
         {
           Vector3 relativePos = target.position - transform.position;

             // the second argument, upwards, defaults to Vector3.up
              Quaternion rotation = Quaternion.LookRotation(relativePos, Vector3.up);
             transform.rotation = rotation;
            }
         }

         */

        //ShoulderRight.rotation = Quaternion.LookRotation();
        /*y ^ = { Mathf.Atan2(z, x) * DEGREES}*/
          //debugText.text = $" {System.Environment.NewLine} z^ = {Mathf.Atan2(y, x) * DEGREES}";
        //ShoulderRight.eulerAngles = baseRotShoulderRight - DEGREES * new Vector3(0, 0, Mathf.Atan2(y,x));


        // Right Elbow Z axis
        y = body.Joints[Kinect.JointType.WristRight].Position.Z - body.Joints[Kinect.JointType.ElbowRight].Position.Z;
        y = body.Joints[Kinect.JointType.WristRight].Position.Y - body.Joints[Kinect.JointType.ElbowRight].Position.Y;
        x = body.Joints[Kinect.JointType.WristRight].Position.X - body.Joints[Kinect.JointType.ElbowRight].Position.X;
        //ElbowRight.eulerAngles = baseRotElbowRight - DEGREES * new Vector3(0, 0, Mathf.Atan2(y, x));

        // Right Wrist Z axis
        y = body.Joints[Kinect.JointType.HandRight].Position.Z - body.Joints[Kinect.JointType.WristRight].Position.Z;
        y = body.Joints[Kinect.JointType.HandRight].Position.Y - body.Joints[Kinect.JointType.WristRight].Position.Y;
        x = body.Joints[Kinect.JointType.HandRight].Position.X - body.Joints[Kinect.JointType.WristRight].Position.X;
        //WristRight.eulerAngles = baseRotWristRight - DEGREES * new Vector3(0, 0, Mathf.Atan2(y, x));





    }
}
