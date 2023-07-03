using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class VarsContainer : NetworkBehaviour
{
    public TextMesh textMesh;
    public Transform maniTransform;
    
    
    [SyncVar(hook = nameof(NumberChanged))] 
    public int n;
    
    
    public SyncDictionary<string, Vector3> dotPositions = new SyncDictionary<string, Vector3>()
    {
        {"Root", Vector3.zero},
    
        {"HipRight", Vector3.zero},
        {"KneeRight", Vector3.zero},
        {"AnkleRight", Vector3.zero},  
        {"FootRight", Vector3.zero},  
    
        {"HipLeft", Vector3.zero},  
        {"KneeLeft", Vector3.zero},
        {"AnkleLeft", Vector3.zero}, 
        {"FootLeft", Vector3.zero},
    
        {"SpineBase", Vector3.zero}, 
        {"SpineMid", Vector3.zero},
        {"SpineShoulder", Vector3.zero},
    
        {"Neck", Vector3.zero},
        {"Head", Vector3.zero},
    
        {"ShoulderRight", Vector3.zero},
        {"ElbowRight", Vector3.zero},
        {"WristRight", Vector3.zero},
    
        {"ShoulderLeft", Vector3.zero},  
        {"ElbowLeft", Vector3.zero},
        {"WristLeft", Vector3.zero} 
    };
    
    public SyncDictionary<string, Vector3> dotRotations = new SyncDictionary<string, Vector3>()
    {
        {"Root", Vector3.zero},
    
        {"HipRight", Vector3.zero},
        {"KneeRight", Vector3.zero},
        {"AnkleRight", Vector3.zero},  
        {"FootRight", Vector3.zero},  
    
        {"HipLeft", Vector3.zero},  
        {"KneeLeft", Vector3.zero},
        {"AnkleLeft", Vector3.zero}, 
        {"FootLeft", Vector3.zero},
    
        {"SpineBase", Vector3.zero}, 
        {"SpineMid", Vector3.zero},
        {"SpineShoulder", Vector3.zero},
    
        {"Neck", Vector3.zero},
        {"Head", Vector3.zero},
    
        {"ShoulderRight", Vector3.zero},
        {"ElbowRight", Vector3.zero},
        {"WristRight", Vector3.zero},
    
        {"ShoulderLeft", Vector3.zero},  
        {"ElbowLeft", Vector3.zero},
        {"WristLeft", Vector3.zero} 
    };
    public void NumberChanged(int oldValue, int newValue)
    {
        textMesh.text = newValue.ToString();
    }
    
    private void Start()
    {
        textMesh.text = n.ToString();
    }


}
