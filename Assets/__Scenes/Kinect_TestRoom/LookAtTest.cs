using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtTest : MonoBehaviour
{
    public GameObject hand;
    public GameObject foot;

    
    public GameObject elbowPoint;

    // Update is called once per frame
    void Update()
    {
        //stick.transform.rotation = Quaternion.LookRotation(elbowPoint.transform.position, Vector3.up);
        hand.transform.LookAt(elbowPoint.transform);
    }
}
