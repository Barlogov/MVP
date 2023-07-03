using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;
using System;
using System.Numerics;
using UnityEngine.UI;

public class Test_BodyTracing_Rotations : MonoBehaviour
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

    public GameObject bodyPref;
    private UnityEngine.Vector3 pos;
    private float scaleMultiplier;
    private GameObject rot;

    private void Start()
    {
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
            }
        }



    }

    // Переменные для трансофрмов каждой трек-точки тела 
    // TODO перенести в RefreshBodyObject при добавлении поддержки нескольких человек

    /*private Transform Root;*/

    [Space(10)]
    [Header("Joint Transforms: ")]

    public Transform HipRight;
    public Transform KneeRight;
    public Transform AnkleRight;
    public Transform FootRight;

    public Transform HipLeft;
    public Transform KneeLeft;
    public Transform AnkleLeft;
    public Transform FootLeft;

    public Transform SpineBase;
    public Transform SpineMid;
    public Transform SpineShoulder;

    public Transform Neck;
    public Transform Head;

    public Transform ShoulderRight;
    public Transform ElbowRight;
    public Transform WristRight;

    public Transform ShoulderLeft;
    public Transform ElbowLeft;
    public Transform WristLeft;


    private GameObject CreateBodyObject(ulong id)
    {
        GameObject personModel = Instantiate(bodyPref);
        personModel.transform.position = pos;

        personModel.name = $"PersonModel {id}";

        // Поиск трансформов точек тела внутри объекта personModel

        HipRight = personModel.transform.Find("Root/SpineBase/HipRight");
        KneeRight = personModel.transform.Find("Root/SpineBase/HipRight/KneeRight");
        AnkleRight = personModel.transform.Find("Root/SpineBase/HipRight/KneeRight/AnkleRight");
        FootRight = personModel.transform.Find("Root/SpineBase/HipRight/KneeRight/AnkleRight/FootRight");

        HipLeft = personModel.transform.Find("Root/SpineBase/HipLeft");
        KneeLeft = personModel.transform.Find("Root/SpineBase/HipLeft/KneeLeft");
        AnkleLeft = personModel.transform.Find("Root/SpineBase/HipLeft/KneeLeft/AnkleLeft");
        FootLeft = personModel.transform.Find("Root/SpineBase/HipLeft/KneeLeft/AnkleLeft/FootLeft");

        SpineBase = personModel.transform.Find("Root/SpineBase");
        SpineMid = personModel.transform.Find("Root/SpineBase/SpineMid");
        SpineShoulder = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder");

        Neck = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck");
        Head = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck/Head");

        ShoulderRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight");
        ElbowRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight");
        WristRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight/WristRight");

        ShoulderLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft");
        ElbowLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft");
        WristLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft/WristLeft");


        return personModel;
    }



    //UnityEngine.Vector3 ShoulderRightv3;
    //UnityEngine.Vector3 ElbowRightv3;

    public float s;
     // Не создается транспорт

    private void RefreshBodyObject(Kinect.Body body, GameObject bodyObject)
    {
        //RefreshPosition(body, bodyObject);
        //RefreshRotation(body, bodyObject);

        //ShoulderRightv3 = new UnityEngine.Vector3(body.Joints[Kinect.JointType.ShoulderRight].Position.X, body.Joints[Kinect.JointType.ShoulderRight].Position.Y, body.Joints[Kinect.JointType.ShoulderRight].Position.Z);
        //ElbowRightv3 = new UnityEngine.Vector3(body.Joints[Kinect.JointType.ElbowRight].Position.X, body.Joints[Kinect.JointType.ElbowRight].Position.Y, body.Joints[Kinect.JointType.ElbowRight].Position.Z);
        
        var SR_O = body.JointOrientations[Kinect.JointType.ShoulderRight].Orientation;
        var ER_O = body.JointOrientations[Kinect.JointType.ElbowRight].Orientation;
        var WR_O = body.JointOrientations[Kinect.JointType.WristRight].Orientation;

        /*        debugText.text = String.Format("{0,-10}  {1,-10}  {2,-10}\n", X_Pitch(SR_O), Y_Yaw(SR_O), Z_Roll(SR_O));
                debugText.text += String.Format("{0,-10}  {1,-10}  {2,-10}\n", X_Pitch(ER_O), Y_Yaw(ER_O), Z_Roll(ER_O));*/
        /*
                rot.transform.rotation = V4ToQuatConverter(SR_O);
                rot.transform.eulerAngles += new UnityEngine.Vector3(0, 180, 0);
                ShoulderRight.rotation = rot.transform.rotation;*/


        HipRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.HipRight].Orientation);
        KneeRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.KneeRight].Orientation);
        AnkleRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.AnkleRight].Orientation);
        FootRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.FootRight].Orientation);

        HipLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.HipLeft].Orientation);
        KneeLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.KneeLeft].Orientation);
        AnkleLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.AnkleLeft].Orientation);
        FootLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.FootLeft].Orientation);

        SpineBase.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.SpineBase].Orientation);
        SpineMid.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.SpineMid].Orientation);
        SpineShoulder.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.SpineShoulder].Orientation);

        Neck.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.Neck].Orientation);
        Head.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.Head].Orientation);

        ShoulderRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.ShoulderRight].Orientation);
        ElbowRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.ElbowLeft].Orientation);
        WristRight.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.WristLeft].Orientation);

        ShoulderLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.ShoulderLeft].Orientation);
        ElbowLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.ElbowRight].Orientation);
        WristLeft.rotation = V4ToQuatConverter(body.JointOrientations[Kinect.JointType.WristRight].Orientation);

        //TODO Сравнить длины Kinekt joints и длин модели 
    }

    private void RefreshRotation(Kinect.Body body, GameObject bodyObject)
    {



    }



    public float X_Pitch(Kinect.Vector4 kinectData)
    {
        UnityEngine.Vector4 quaternion = new UnityEngine.Vector4(kinectData.X, kinectData.Y, kinectData.Z, kinectData .W);
        double value1 = 2.0 * (quaternion.w * quaternion.x + quaternion.y * quaternion.z);
        double value2 = 1.0 - 2.0 * (quaternion.x * quaternion.x + quaternion.y * quaternion.y);

        double roll = Math.Atan2(value1, value2);

        return (float)(roll * (180.0 / Math.PI));
    }


    public float Y_Yaw(Kinect.Vector4 kinectData)
    {
        UnityEngine.Vector4 quaternion = new UnityEngine.Vector4(kinectData.X, kinectData.Y, kinectData.Z, kinectData.W);
        double value = +2.0 * (quaternion.w * quaternion.y - quaternion.z * quaternion.x);
        value = value > 1.0 ? 1.0 : value;
        value = value < -1.0 ? -1.0 : value;

        double pitch = Math.Asin(value);

        return (float)(pitch * (180.0 / Math.PI));
    }

    public float Z_Roll(Kinect.Vector4 kinectData)
    {
        UnityEngine.Vector4 quaternion = new UnityEngine.Vector4(kinectData.X, kinectData.Y, kinectData.Z, kinectData.W);
        double value1 = 2.0 * (quaternion.w * quaternion.z + quaternion.x * quaternion.y);
        double value2 = 1.0 - 2.0 * (quaternion.y * quaternion.y + quaternion.z * quaternion.z);

        double yaw = Math.Atan2(value1, value2);

        return (float)(yaw * (180.0 / Math.PI));
    }

    public UnityEngine.Quaternion V4ToQuatConverter(Kinect.Vector4 kinectData)
    {
        UnityEngine.Quaternion quaternion = new UnityEngine.Quaternion(kinectData.X, kinectData.Y, kinectData.Z, kinectData.W);
        return quaternion;

        
    }
}

/*    public const float DEGREES = 57.29578f;
    Vector3 GetAngle(Vector3 from, Vector3 to)
    {
        Vector3 vector = to - from;
        Vector3 angle = Vector3.zero;

        angle.x = -Mathf.Atan(vector.y / vector.z) * DEGREES;
        angle.y = -Mathf.Atan(vector.z / vector.x) * DEGREES;
        angle.z = Mathf.Atan(vector.y / vector.x) * DEGREES;

        return angle;
    }*/