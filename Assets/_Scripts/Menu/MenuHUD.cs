using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuHUD : MonoBehaviour
{
    public GameObject WindowsUI;
    public GameObject PhoneUI;

    private void Start()
    {
        // Включить Windows UI
        if (Application.platform == RuntimePlatform.WindowsPlayer ||
            Application.platform == RuntimePlatform.WindowsEditor)
        {
            WindowsUI.SetActive(true);
        }
        // Включить Phone UI
        else
        {
            PhoneUI.SetActive(true);
        }
    }
}
