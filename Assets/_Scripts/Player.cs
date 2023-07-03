using System;
using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;


public class Player : NetworkBehaviour
{
    public VarsContainer _varsContainer;

    private void Start()
    {
        _varsContainer = GameObject.Find("VarsContainer").GetComponent<VarsContainer>();
    }

    

    private void Update()
    {
        if (isLocalPlayer && Input.GetKeyDown(KeyCode.Space))
        {
            AddNumber(1);
        }
    }

    [Command(requiresAuthority = false)]
    void AddNumber(int num)
    {
        _varsContainer.n += num;
    }

}

// private NetworkManager _networkManager;
// public VarsContainer varsContainer;
//     
// public GameObject varsContainerPref;
//     
// private void Start()
// {
//     if (!isLocalPlayer) return;
//
//     _networkManager = GameObject.Find("NetworkManager").GetComponent<NetworkManager>();
//     GameObject varsContainerGO = GameObject.Find("VarsContainer(Clone)");
//
//     if (varsContainerGO == null)
//     {
//         if (Application.platform == RuntimePlatform.WindowsPlayer ||
//             Application.platform == RuntimePlatform.WindowsEditor)
//         {
//             CmdSpawnTheVarsHolder();
//         }
//             
//     }
//         
//         
// }
//
// private void Update()
// {
//     if (!isLocalPlayer) return;
//
//     if (Input.GetKeyDown(KeyCode.Space))
//     {
//         varsContainer = GameObject.Find("VarsContainer(Clone)").GetComponent<VarsContainer>();
//         CmdAddTheNumber();
//     }
//         
// }
//
// [Command]
// void CmdAddTheNumber()
// {
//     varsContainer.NumberChanged(0, 1);
// }
//
// [Command]
// void CmdSpawnTheVarsHolder()
// {
//     // Заспавним VarsContainer
//     GameObject varsContainerGO = Instantiate(varsContainerPref);
//     NetworkServer.Spawn(varsContainerGO);
// }