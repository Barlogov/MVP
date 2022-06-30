using System;
using UnityEngine;
using Mirror;

public class OnlineSceneManager : NetworkBehaviour
{
    public GameObject varsContainerPref;
    
    [Server]
    private void Start()
    {
        
    }
}
