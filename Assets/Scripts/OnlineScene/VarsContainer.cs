using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class VarsContainer : NetworkBehaviour
{
    public TextMesh textMesh;
    
    
    [SyncVar(hook = nameof(NumberChanged))] 
    public int n;

    private void Start()
    {
        textMesh.text = n.ToString();
    }

    public void NumberChanged(int oldValue, int newValue)
    {
        textMesh.text = newValue.ToString();
    }
}
