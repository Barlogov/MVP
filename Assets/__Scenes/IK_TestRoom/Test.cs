using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{
    public GameObject dan;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(dan.transform.Find("Head").position);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
