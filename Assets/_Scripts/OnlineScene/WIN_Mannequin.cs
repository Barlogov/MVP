using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WIN_Mannequin : MonoBehaviour
{
    public WIN_SERVER_SyncMannequinToSyncVar syncMannequinToSyncVar;

    void Start()
    {
        syncMannequinToSyncVar = GameObject.Find("SyncMannequinToSyncVar").GetComponent<WIN_SERVER_SyncMannequinToSyncVar>();
        syncMannequinToSyncVar.FindMannequinOnTheScene();
    }

    private void OnDestroy()
    {
        syncMannequinToSyncVar.SetMannequinToNull();
    }
}
