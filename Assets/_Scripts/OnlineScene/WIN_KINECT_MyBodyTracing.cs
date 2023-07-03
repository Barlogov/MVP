using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;

//TODO Перенести код, применяемый к body в отдельный скрипт для каждого body
public class WIN_KINECT_MyBodyTracing : MonoBehaviour
{
    public GameObject BodySourceManager;

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
    private Vector3 pos;
    private float scaleMultiplier;

    private void Start()
    {
        pos = new Vector3(0,0,0);
        scaleMultiplier = 1;
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

        HipRight = personModel.transform.Find("Root/HipRight");
        KneeRight = personModel.transform.Find("Root/HipRight/KneeRight");
        AnkleRight = personModel.transform.Find("Root/HipRight/KneeRight/AnkleRight");
        FootRight = personModel.transform.Find("Root/HipRight/KneeRight/AnkleRight/FootRight");

        HipLeft = personModel.transform.Find("Root/HipLeft");
        KneeLeft = personModel.transform.Find("Root/HipLeft/KneeLeft");
        AnkleLeft = personModel.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft");
        FootLeft = personModel.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft/FootLeft");

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

        /* MyManeequin Version
         Root = personModel.transform.Find("Root");
         
         HipRight = personModel.transform.Find("Root/HipRight");
         KneeRight = personModel.transform.Find("Root/HipRight/KneeRight");
         AnkleRight = personModel.transform.Find("Root/HipRight/KneeRight/AnkleRight");
         FootRight = personModel.transform.Find("Root/HipRight/KneeRight/AnkleRight/FootRight");

         HipLeft = personModel.transform.Find("Root/HipLeft");
         KneeLeft = personModel.transform.Find("Root/HipLeft/KneeLeft");
         AnkleLeft = personModel.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft");
         FootLeft = personModel.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft/FootLeft");

         SpineBase = personModel.transform.Find("Root/SpineBase");
         SpineMid = personModel.transform.Find("Root/SpineBase/SpineMid");
         SpineShoulder = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder");

         Neck = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck");
         Head = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck/Head");

         ShoulderRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:RightShoulder/ShoulderRight");
         ElbowRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:RightShoulder/ShoulderRight/ElbowRight");
         WristRight = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:RightShoulder/ShoulderRight/ElbowRight/WristRight");

         ShoulderLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:LeftShoulder/ShoulderLeft");
         ElbowLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:LeftShoulder/ShoulderLeft/ElbowLeft");
         WristLeft = personModel.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/mixamorig1:LeftShoulder/ShoulderLeft/ElbowLeft/WristLeft");
         */
        return personModel;
    }
    

    private void RefreshBodyObject(Kinect.Body body, GameObject bodyObject)
    {
        RefreshPosition(body, bodyObject);
    }

    private void RefreshPosition(Kinect.Body body, GameObject bodyObject)
    {
        // Редактирование позиции и поворота точек  
        /*Root.position = pos + new Vector3(body.Joints[Kinect.JointType.SpineMid].Position.X, body.Joints[Kinect.JointType.SpineMid].Position.Y, 0) * scaleMultiplier;*/

        HipLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.HipLeft].Position.X, body.Joints[Kinect.JointType.HipLeft].Position.Y, 0) * scaleMultiplier;
        KneeLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.KneeLeft].Position.X, body.Joints[Kinect.JointType.KneeLeft].Position.Y, 0) * scaleMultiplier;
        AnkleLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.AnkleLeft].Position.X, body.Joints[Kinect.JointType.AnkleLeft].Position.Y, 0) * scaleMultiplier;
        FootLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.FootLeft].Position.X, body.Joints[Kinect.JointType.FootLeft].Position.Y, 0) * scaleMultiplier;
        
        HipRight.position = pos + new Vector3(body.Joints[Kinect.JointType.HipRight].Position.X, body.Joints[Kinect.JointType.HipRight].Position.Y, 0) * scaleMultiplier;
        KneeRight.position = pos + new Vector3(body.Joints[Kinect.JointType.KneeRight].Position.X, body.Joints[Kinect.JointType.KneeRight].Position.Y, 0) * scaleMultiplier;
        AnkleRight.position = pos + new Vector3(body.Joints[Kinect.JointType.AnkleRight].Position.X, body.Joints[Kinect.JointType.AnkleRight].Position.Y, 0) * scaleMultiplier;
        FootRight.position = pos + new Vector3(body.Joints[Kinect.JointType.FootRight].Position.X, body.Joints[Kinect.JointType.FootRight].Position.Y, 0) * scaleMultiplier;

        SpineBase.position = pos + new Vector3(body.Joints[Kinect.JointType.SpineBase].Position.X, body.Joints[Kinect.JointType.SpineBase].Position.Y, 0) * scaleMultiplier;
        SpineMid.position = pos + new Vector3(body.Joints[Kinect.JointType.SpineMid].Position.X, body.Joints[Kinect.JointType.SpineMid].Position.Y, 0) * scaleMultiplier;
        SpineShoulder.position = pos + new Vector3(body.Joints[Kinect.JointType.SpineShoulder].Position.X, body.Joints[Kinect.JointType.SpineShoulder].Position.Y, 0) * scaleMultiplier;

        Neck.position = pos + new Vector3(body.Joints[Kinect.JointType.Neck].Position.X, body.Joints[Kinect.JointType.Neck].Position.Y, 0) * scaleMultiplier;
        Head.position = pos + new Vector3(body.Joints[Kinect.JointType.Head].Position.X, body.Joints[Kinect.JointType.Head].Position.Y, 0) * scaleMultiplier;
        
        ShoulderLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.ShoulderLeft].Position.X, body.Joints[Kinect.JointType.ShoulderLeft].Position.Y, 0) * scaleMultiplier;
        ElbowLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.ElbowLeft].Position.X, body.Joints[Kinect.JointType.ElbowLeft].Position.Y, 0) * scaleMultiplier;
        WristLeft.position = pos + new Vector3(body.Joints[Kinect.JointType.WristLeft].Position.X, body.Joints[Kinect.JointType.WristLeft].Position.Y, 0) * scaleMultiplier;
        
        ShoulderRight.position = pos + new Vector3(body.Joints[Kinect.JointType.ShoulderRight].Position.X, body.Joints[Kinect.JointType.ShoulderRight].Position.Y, 0) * scaleMultiplier;
        ElbowRight.position = pos + new Vector3(body.Joints[Kinect.JointType.ElbowRight].Position.X, body.Joints[Kinect.JointType.ElbowRight].Position.Y, 0) * scaleMultiplier;
        WristRight.position = pos + new Vector3(body.Joints[Kinect.JointType.WristRight].Position.X, body.Joints[Kinect.JointType.WristRight].Position.Y, 0) * scaleMultiplier;
    }
    
   

}
