using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StickRotationQTest : MonoBehaviour
{
    public GameObject stick;
    public GameObject shoulderPoint;
    public GameObject elbowPoint;

    public Vector4 rot;

    public const float RAD_TO_DEG = 180 / Mathf.PI; //57...
    public const float DEG_TO_RAD = Mathf.PI / 180; //0.017...

    private void Start()
    {
        stick.transform.rotation = new Quaternion(0, 0, 0, 0);
    }

    float quat_X = 0;
    float quat_Y = 0;
    float quat_Z = 0;
    float quat_W = 0;


    private void Update()
    {

        Vector3 vector = elbowPoint.transform.position - shoulderPoint.transform.position;
        //Debug.Log(elbowPoint.transform.position - shoulderPoint.transform.position);

        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.x, vector.y, vector.z), Vector3.right);
        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.x, vector.z, vector.y), Vector3.right);
        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.y, vector.x, vector.z), Vector3.right);
        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.y, vector.z, vector.x), Vector3.right);
        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.z, vector.x, vector.y), Vector3.right);
        //stick.transform.rotation = Quaternion.LookRotation(new Vector3(vector.z, vector.z, vector.x), Vector3.right);

        /*if(vector.x >= 0)
        {
            stick.transform.rotation = new Quaternion(0, -Mathf.Atan(vector.z / vector.x) / 2, Mathf.Atan(vector.y / vector.x) / 2, 0);
        }
        else
        {
            stick.transform.rotation = new Quaternion(0, -Mathf.Atan(vector.z / vector.x) / 2, Mathf.Atan(vector.y / vector.x) / 2, -1);
        }*/

        //stick.transform.rotation = new Quaternion(rot.x, -Mathf.Atan(vector.z / vector.x) / 2, Mathf.Atan(vector.y / vector.x) / 2, rot.w);





        /*
             --1st generation--
        */

        //X rotation for Right Arm:
        /*        if (vector.z >= 0)
                {
                    quat_X = Mathf.Sin((-Mathf.Atan(vector.y / vector.z)) / 2);
                }
                else
                    if (vector.y <= 0)
                {
                    quat_X = Mathf.Sin((-Mathf.Atan(vector.y / vector.z) - Mathf.PI) / 2);
                }
                else
                {
                    quat_X = Mathf.Sin((-Mathf.Atan(vector.y / vector.z) + Mathf.PI) / 2);
                }*/

        //X rotation for Right Arm:
        /*        if (vector.z >= 0 && vector.y >= 0)
                {
                    quat_X = -Mathf.Sin((Mathf.Atan(vector.y / vector.z)) / 2);
                }
                if (vector.z >= 0 && vector.y < 0)
                {
                    quat_X = -Mathf.Sin((Mathf.Atan(vector.y / vector.z) + Mathf.PI) / 2);
                }
                if (vector.z < 0 && vector.y >= 0)
                {
                    quat_X = -Mathf.Sin((Mathf.Atan(vector.y / vector.z)) / 2);
                }
                if (vector.z < 0 && vector.y < 0)
                {
                    quat_X = -Mathf.Sin((Mathf.Atan(vector.y / vector.z) - Mathf.PI) / 2);
                }*/

        //Y rotation for Right Arm:
        /*        if (vector.z >= 0 && vector.x >= 0)
                {
                    quat_Y = -Mathf.Sin((Mathf.Atan(vector.z / vector.x)) / 2);
                }
                if (vector.z >= 0 && vector.x < 0)
                {
                    quat_Y = -Mathf.Sin((Mathf.Atan(vector.z / vector.x) + Mathf.PI) / 2);
                }
                if (vector.z < 0 && vector.x >= 0)
                {
                    quat_Y = -Mathf.Sin((Mathf.Atan(vector.z / vector.x)) / 2);
                }
                if (vector.z < 0 && vector.x < 0)
                {
                    quat_Y = -Mathf.Sin((Mathf.Atan(vector.z / vector.x) - Mathf.PI) / 2);
                }
        */



        //Z rotation for Right Arm:
        /*        if (vector.x >= 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x)) / 2);
                }
                else
                if (vector.y <= 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x) - Mathf.PI) / 2);
                }
                else
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x) + Mathf.PI) / 2);
                }*/

        /*        if (vector.y >= 0 && vector.x >= 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x)) / 2);
                    Debug.Log((Mathf.Atan(vector.y / vector.x)) / 2);
                }
                if (vector.y >= 0 && vector.x < 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x) + Mathf.PI) / 2);
                    Debug.Log((Mathf.Atan(vector.y / vector.x) + Mathf.PI) / 2);
                }
                if (vector.y < 0 && vector.x >= 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x)) / 2);
                    Debug.Log((Mathf.Atan(vector.y / vector.x)) / 2);
                }
                if (vector.y < 0 && vector.x < 0)
                {
                    quat_Z = Mathf.Sin((Mathf.Atan(vector.y / vector.x) - Mathf.PI) / 2);
                    Debug.Log((Mathf.Atan(vector.y / vector.x) - Mathf.PI) / 2);
                }*/

        //W rotation for Right Arm:
        /*        if (vector.x >= 0)
                {
                    quat_W = Mathf.Cos(Mathf.PI / 4) + (1 - Mathf.Cos(Mathf.PI / 4)) * Mathf.Cos(-Mathf.Atan(vector.z / vector.x));
                } else
                {
                    quat_W = Mathf.Cos(Mathf.PI / 4) -  Mathf.Cos(Mathf.PI / 4) * Mathf.Cos(-Mathf.Atan(vector.z / vector.x));
                }*/


        /*
             --1st generation--
        */





        //stick.transform.rotation = new Quaternion(0, 0, quat_Z, quat_W);



        /*
                if(vector.x >= 0)
                {
                    stick.transform.rotation = new Quaternion(rot.x, atanY_Y, atanZ_Z, 1);
                } else
                {
                    stick.transform.rotation = new Quaternion(rot.x, atanY_Y, atanZ_Z, -1);
                }
                */

        //stick.transform.rotation = new Quaternion(rot.x, rot.y, rot.z, rot.w);

        /*        float l_y = stick.transform.rotation.y;
                float l_w = stick.transform.rotation.w;*/
        //Debug.Log(l_y + " " + l_w);


        //Debug.Log("Y_W = " + atanY_W);
        //Debug.Log("Z_W = " + atanZ_W);
        /*
                Debug.Log("Y = " + atanY_Y);
                Debug.Log("W = " + atanY_W);*/

        stick.transform.rotation = Quaternion.Euler(GetAngle(vector));
    }

    public Vector3 GetAngle(Vector3 _vector)
    {
        Vector3 angle = Vector3.zero;
        //Debug.Log(_vector);

        // Angle X
        angle.x = 0;

        // Angle Y
/*        if (_vector.z >= 0 && _vector.x >= 0)
        {
            angle.y = -Mathf.Atan(_vector.z / _vector.x) * Mathf.Rad2Deg;
            Debug.Log("1");
        }
        if (_vector.z >= 0 && _vector.x < 0)
        {
            angle.y = -(Mathf.Atan(_vector.z / _vector.x) + Mathf.PI) * Mathf.Rad2Deg;
            Debug.Log("2");
        }
        if (_vector.z < 0 && _vector.x >= 0)
        {
            angle.y = -Mathf.Atan(_vector.z / _vector.x) * Mathf.Rad2Deg;
            Debug.Log("3");
        }
        if (_vector.z < 0 && _vector.x < 0)
        {
            angle.y = -(Mathf.Atan(_vector.z / _vector.x) - Mathf.PI) * Mathf.Rad2Deg;
            Debug.Log("4");
        }*/

        // Angle Z
/*        if (_vector.y >= 0 && _vector.x >= 0)
        {
            angle.z = Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg;


            //Debug.Log(Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg);
        }
        if (_vector.y >= 0 && _vector.x < 0)
        {
            angle.z = (Mathf.Atan(_vector.y / _vector.x) + Mathf.PI) * Mathf.Rad2Deg;


            //Debug.Log((Mathf.Atan(_vector.y / _vector.x) + Mathf.PI) * Mathf.Rad2Deg);
        }
        if (_vector.y < 0 && _vector.x >= 0)
        {
            angle.z = Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg;
        }
        if (_vector.y < 0 && _vector.x < 0)
        {
            angle.z = (Mathf.Atan(_vector.y / _vector.x) - Mathf.PI) * Mathf.Rad2Deg;
        }*/

        if(_vector.x >= 0)
        {
            angle.y = -Mathf.Atan(_vector.z / _vector.x) * Mathf.Rad2Deg;
            angle.z = Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg;
            
            Debug.Log(Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg);
        } else // x < 0
        {
            angle.y = 180 - Mathf.Atan(_vector.z / _vector.x) * Mathf.Rad2Deg;
            angle.z = 180 + Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg;
            Debug.Log(Mathf.Atan(_vector.y / _vector.x) * Mathf.Rad2Deg);
        }

        //Debug.Log(angle);
        return angle;
    }
}
