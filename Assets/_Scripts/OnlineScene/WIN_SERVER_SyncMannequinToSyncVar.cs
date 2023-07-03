using System;
using System.Collections.Generic;
using System.Collections;
using Mirror;
using UnityEngine;

public class WIN_SERVER_SyncMannequinToSyncVar : NetworkBehaviour
{
    public VarsContainer varsContainer;
    public GameObject MannequinGO;
    
    public Transform Root;
    
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

    private void Start()
    {
        varsContainer = GameObject.Find("VarsContainer").GetComponent<VarsContainer>();
    }

    private void Update()
    {
        if (!isClient || !(Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.WindowsPlayer))
        {
            // Debug.Log("Point 1");
            return;
        }
        // AddNumber(1);
        // Debug.Log("Point 2");
        if (MannequinGO != null)
        {
            UpdatePointTransforms();
        }

    }
    
    [Command(requiresAuthority = false)]
    void AddNumber(int num)
    {
        varsContainer.n += num;
    }

    public void FindMannequinOnTheScene()
    {
        // TODO Возможно появление 2 маникенов с этим тегом, если в камеру зайдёт 2 человека
        MannequinGO = GameObject.FindWithTag("PC_MyMannequin");
        
        if (MannequinGO!=null)
        {
            SetPointTransforms();
        }
        else
        {
            Debug.Log("Error_FMOS_1");
        }
    }

    public void SetMannequinToNull()
    {
        MannequinGO = null;
    }
    
    public void SetPointTransforms()
    {
        //Root = MannequinGO.transform.Find("Root");

        HipRight = MannequinGO.transform.Find("Root/HipRight");
        KneeRight = MannequinGO.transform.Find("Root/HipRight/KneeRight");
        AnkleRight = MannequinGO.transform.Find("Root/HipRight/KneeRight/AnkleRight");
        FootRight = MannequinGO.transform.Find("Root/HipRight/KneeRight/AnkleRight/FootRight");

        HipLeft = MannequinGO.transform.Find("Root/HipLeft");
        KneeLeft = MannequinGO.transform.Find("Root/HipLeft/KneeLeft");
        AnkleLeft = MannequinGO.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft");
        FootLeft = MannequinGO.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft/FootLeft");

        SpineBase = MannequinGO.transform.Find("Root/SpineBase");
        SpineMid = MannequinGO.transform.Find("Root/SpineBase/SpineMid");
        SpineShoulder = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder");

        Neck = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck");
        Head = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck/Head");

        ShoulderRight = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight");
        ElbowRight = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight");
        WristRight = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight/WristRight");

        ShoulderLeft = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft");
        ElbowLeft = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft");
        WristLeft = MannequinGO.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft/WristLeft");
    }

    public void UpdatePointTransforms()
    {
        
        SyncPossition(
            //Root.position,
    
            HipRight.position,
            KneeRight.position,
            AnkleRight.position,
            FootRight.position,
    
            HipLeft.position,
            KneeLeft.position,
            AnkleLeft.position,
            FootLeft.position,
    
            SpineBase.position,
            SpineMid.position,
            SpineShoulder.position,
    
            Neck.position,
            Head.position,
    
            ShoulderRight.position,
            ElbowRight.position,
            WristRight.position,
    
            ShoulderLeft.position,
            ElbowLeft.position,
            WristLeft.position
            );
        
        /*SyncRotation(
            Root.eulerAngles,
    
            HipRight.eulerAngles,
            KneeRight.eulerAngles,
            AnkleRight.eulerAngles,
            FootRight.eulerAngles,
    
            HipLeft.eulerAngles,
            KneeLeft.eulerAngles,
            AnkleLeft.eulerAngles,
            FootLeft.eulerAngles,
    
            SpineBase.eulerAngles,
            SpineMid.eulerAngles,
            SpineShoulder.eulerAngles,
    
            Neck.eulerAngles,
            Head.eulerAngles,
    
            ShoulderRight.eulerAngles,
            ElbowRight.eulerAngles,
            WristRight.eulerAngles,
    
            ShoulderLeft.eulerAngles,
            ElbowLeft.eulerAngles,
            WristLeft.eulerAngles
        );*/
    }
    

    
    [Command(requiresAuthority = false)]
    void SyncPossition(
       //Vector3 Rootv3,
    
       Vector3 HipRightv3,
       Vector3 KneeRightv3,
       Vector3 AnkleRightv3,
       Vector3 FootRightv3,
    
       Vector3 HipLeftv3,
       Vector3 KneeLeftv3,
       Vector3 AnkleLeftv3,
       Vector3 FootLeftv3,
    
       Vector3 SpineBasev3,
       Vector3 SpineMidv3,
       Vector3 SpineShoulderv3,
    
       Vector3 Neckv3,
       Vector3 Headv3,
    
       Vector3 ShoulderRightv3,
       Vector3 ElbowRightv3,
       Vector3 WristRightv3,
    
       Vector3 ShoulderLeftv3,
       Vector3 ElbowLeftv3,
       Vector3 WristLeftv3
       )
    {
        //varsContainer.dotPositions["Root"] = Rootv3;
        
        varsContainer.dotPositions["HipRight"] = HipRightv3;
        varsContainer.dotPositions["KneeRight"] = KneeRightv3;
        varsContainer.dotPositions["AnkleRight"] = AnkleRightv3;
        varsContainer.dotPositions["FootRight"] = FootRightv3;
        
        varsContainer.dotPositions["HipLeft"] = HipLeftv3;
        varsContainer.dotPositions["KneeLeft"] = KneeLeftv3;
        varsContainer.dotPositions["AnkleLeft"] = AnkleLeftv3;
        varsContainer.dotPositions["FootLeft"] = FootLeftv3;
        
        varsContainer.dotPositions["SpineBase"] = SpineBasev3;
        varsContainer.dotPositions["SpineMid"] = SpineMidv3;
        varsContainer.dotPositions["SpineShoulder"] = SpineShoulderv3;
        
        varsContainer.dotPositions["Neck"] = Neckv3;
        varsContainer.dotPositions["Head"] = Headv3;
        
        varsContainer.dotPositions["ShoulderRight"] = ShoulderRightv3;
        varsContainer.dotPositions["ElbowRight"] = ElbowRightv3;
        varsContainer.dotPositions["WristRight"] = WristRightv3;
        
        varsContainer.dotPositions["ShoulderLeft"] = ShoulderLeftv3;
        varsContainer.dotPositions["ElbowLeft"] = ElbowLeftv3;
        varsContainer.dotPositions["WristLeft"] = WristLeftv3;
    }
    
    [Command(requiresAuthority = false)]
    void SyncRotation(
        //Vector3 Rootv3,
    
        Vector3 HipRightv3,
        Vector3 KneeRightv3,
        Vector3 AnkleRightv3,
        Vector3 FootRightv3,
    
        Vector3 HipLeftv3,
        Vector3 KneeLeftv3,
        Vector3 AnkleLeftv3,
        Vector3 FootLeftv3,
    
        Vector3 SpineBasev3,
        Vector3 SpineMidv3,
        Vector3 SpineShoulderv3,
    
        Vector3 Neckv3,
        Vector3 Headv3,
    
        Vector3 ShoulderRightv3,
        Vector3 ElbowRightv3,
        Vector3 WristRightv3,
    
        Vector3 ShoulderLeftv3,
        Vector3 ElbowLeftv3,
        Vector3 WristLeftv3
    )
    {
        //varsContainer.dotRotations["Root"] = Rootv3;
        
        varsContainer.dotRotations["HipRight"] = HipRightv3;
        varsContainer.dotRotations["KneeRight"] = KneeRightv3;
        varsContainer.dotRotations["AnkleRight"] = AnkleRightv3;
        varsContainer.dotRotations["FootRight"] = FootRightv3;
        
        varsContainer.dotRotations["HipLeft"] = HipLeftv3;
        varsContainer.dotRotations["KneeLeft"] = KneeLeftv3;
        varsContainer.dotRotations["AnkleLeft"] = AnkleLeftv3;
        varsContainer.dotRotations["FootLeft"] = FootLeftv3;
        
        varsContainer.dotRotations["SpineBase"] = SpineBasev3;
        varsContainer.dotRotations["SpineMid"] = SpineMidv3;
        varsContainer.dotRotations["SpineShoulder"] = SpineShoulderv3;
        
        varsContainer.dotRotations["Neck"] = Neckv3;
        varsContainer.dotRotations["Head"] = Headv3;
        
        varsContainer.dotRotations["ShoulderRight"] = ShoulderRightv3;
        varsContainer.dotRotations["ElbowRight"] = ElbowRightv3;
        varsContainer.dotRotations["WristRight"] = WristRightv3;
        
        varsContainer.dotRotations["ShoulderLeft"] = ShoulderLeftv3;
        varsContainer.dotRotations["ElbowLeft"] = ElbowLeftv3;
        varsContainer.dotRotations["WristLeft"] = WristLeftv3;
    }
}
