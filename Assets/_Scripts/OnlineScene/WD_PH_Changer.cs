using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class WD_PH_Changer : NetworkBehaviour
{
    public GameObject windowsPart;
    public GameObject phonePart;
    public GameObject testPart;

    private void Start()
    {
        if (isServer)
        {
            return;
        }

        // Включить Windows Editor
        if (Application.platform == RuntimePlatform.WindowsEditor||
            Application.platform == RuntimePlatform.WindowsPlayer)
        {
            Instantiate(windowsPart);
        }
        // Включить Phone 
        if (Application.platform == RuntimePlatform.Android)
        {
            Instantiate(phonePart);
        }
        
    }
}
