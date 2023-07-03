using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCube : MonoBehaviour
{
    public GameObject obj;
    public GameObject target;

    public const float DEGREES = 57.29578f;
    
    public Vector3 angle = Vector3.zero;
    public Vector3 vector;
    

    // Update is called once per frame
    void Update()
    {
        obj.transform.eulerAngles = GetAngle(obj.transform.position, target.transform.position);
    }

    Vector3 GetAngle(Vector3 from, Vector3 to)
    {
        
        vector = to - from;
        
        angle.x = -Mathf.Atan(vector.y / vector.z) * DEGREES;
        angle.y = -Mathf.Atan(vector.z / vector.x) * DEGREES;
        //angle.z = Mathf.Atan(vector.y / vector.x) * DEGREES;
        
        return angle;
    }
}
