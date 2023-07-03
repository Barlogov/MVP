using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PHONE_MannequinTransformManager : MonoBehaviour
{
    public VarsContainer varsContainer;
    public Vector3 spawnPoint;
    
    //public Transform Root;
    
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

    public void Start()
    {
        varsContainer = GameObject.Find("VarsContainer").GetComponent<VarsContainer>();
        
        //Root = this.transform.Find("Root");

        HipRight = this.transform.Find("Root/HipRight");
        KneeRight = this.transform.Find("Root/HipRight/KneeRight");
        AnkleRight = this.transform.Find("Root/HipRight/KneeRight/AnkleRight");
        FootRight = this.transform.Find("Root/HipRight/KneeRight/AnkleRight/FootRight");

        HipLeft = this.transform.Find("Root/HipLeft");
        KneeLeft = this.transform.Find("Root/HipLeft/KneeLeft");
        AnkleLeft = this.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft");
        FootLeft = this.transform.Find("Root/HipLeft/KneeLeft/AnkleLeft/FootLeft");

        SpineBase = this.transform.Find("Root/SpineBase");
        SpineMid = this.transform.Find("Root/SpineBase/SpineMid");
        SpineShoulder = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder");

        Neck = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck");
        Head = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/Neck/Head");

        ShoulderRight = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight");
        ElbowRight = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight");
        WristRight = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmRight/ShoulderRight/ElbowRight/WristRight");

        ShoulderLeft = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft");
        ElbowLeft = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft");
        WristLeft = this.transform.Find("Root/SpineBase/SpineMid/SpineShoulder/ArmLeft/ShoulderLeft/ElbowLeft/WristLeft");

    }

    public void FixedUpdate()
    {
        UpdatePosition();
        //UpdateRotation();
    }

    public void UpdatePosition()
    {
        //Root.position = spawnPoint + varsContainer.dotPositions["Root"];
        
        HipRight.position = spawnPoint + varsContainer.dotPositions["HipRight"];
        KneeRight.position = spawnPoint + varsContainer.dotPositions["KneeRight"];
        AnkleRight.position = spawnPoint + varsContainer.dotPositions["AnkleRight"];
        FootRight.position = spawnPoint + varsContainer.dotPositions["FootRight"];
    
        HipLeft.position = spawnPoint + varsContainer.dotPositions["HipLeft"];
        KneeLeft.position = spawnPoint + varsContainer.dotPositions["KneeLeft"];
        AnkleLeft.position = spawnPoint + varsContainer.dotPositions["AnkleLeft"];
        FootLeft.position = spawnPoint + varsContainer.dotPositions["FootLeft"];
    
        SpineBase.position = spawnPoint + varsContainer.dotPositions["SpineBase"];
        SpineMid.position = spawnPoint + varsContainer.dotPositions["SpineMid"];
        SpineShoulder.position = spawnPoint + varsContainer.dotPositions["SpineShoulder"];
    
        Neck.position = spawnPoint + varsContainer.dotPositions["Neck"];
        Head.position = spawnPoint + varsContainer.dotPositions["Head"];
    
        ShoulderRight.position = spawnPoint + varsContainer.dotPositions["ShoulderRight"];
        ElbowRight.position = spawnPoint + varsContainer.dotPositions["ElbowRight"];
        WristRight.position = spawnPoint + varsContainer.dotPositions["WristRight"];
    
        ShoulderLeft.position = spawnPoint + varsContainer.dotPositions["ShoulderLeft"];
        ElbowLeft.position = spawnPoint + varsContainer.dotPositions["ElbowLeft"];
        WristLeft.position = spawnPoint + varsContainer.dotPositions["WristLeft"];
    }
    
    public void UpdateRotation()
    {
        //Root.eulerAngles = varsContainer.dotRotations["Root"];
        
        HipRight.eulerAngles = varsContainer.dotRotations["HipRight"];
        KneeRight.eulerAngles = varsContainer.dotRotations["KneeRight"];
        AnkleRight.eulerAngles = varsContainer.dotRotations["AnkleRight"];
        FootRight.eulerAngles = varsContainer.dotRotations["FootRight"];
    
        HipLeft.eulerAngles = varsContainer.dotRotations["HipLeft"];
        KneeLeft.eulerAngles = varsContainer.dotRotations["KneeLeft"];
        AnkleLeft.eulerAngles = varsContainer.dotRotations["AnkleLeft"];
        FootLeft.eulerAngles = varsContainer.dotRotations["FootLeft"];
    
        SpineBase.eulerAngles = varsContainer.dotRotations["SpineBase"];
        SpineMid.eulerAngles = varsContainer.dotRotations["SpineMid"];
        SpineShoulder.eulerAngles = varsContainer.dotRotations["SpineShoulder"];
    
        Neck.eulerAngles = varsContainer.dotRotations["Neck"];
        Head.eulerAngles = varsContainer.dotRotations["Head"];
    
        ShoulderRight.eulerAngles = varsContainer.dotRotations["ShoulderRight"];
        ElbowRight.eulerAngles = varsContainer.dotRotations["ElbowRight"];
        WristRight.eulerAngles = varsContainer.dotRotations["WristRight"];
    
        ShoulderLeft.eulerAngles = varsContainer.dotRotations["ShoulderLeft"];
        ElbowLeft.eulerAngles = varsContainer.dotRotations["ElbowLeft"];
        WristLeft.eulerAngles = varsContainer.dotRotations["WristLeft"];
    }
}
