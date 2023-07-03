using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PHONE_ObjectPlacer : MonoBehaviour
{
    public GameObject markerPref;
    private GameObject markerGO;
    public GameObject mannequinPref;
    private bool mannequinPlaced;

    private ARRaycastManager _raycastManager;

    private void Start()
    {
        _raycastManager = GetComponent<ARRaycastManager>();

        markerGO = Instantiate(markerPref);
        markerGO.SetActive(false);
        mannequinPlaced = false;
    }

    private void Update()
    {
        if (!mannequinPlaced)
        {
            List<ARRaycastHit> raycastHits = new List<ARRaycastHit>();

            _raycastManager.Raycast(new Vector2(Screen.width / 2, Screen.height / 2), raycastHits, TrackableType.Planes);

            if (raycastHits.Count > 0)
            {
                markerGO.transform.position = raycastHits[0].pose.position;
                markerGO.SetActive(true);
            }
            
            // Place the mannequin
            if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
            {
                GameObject mannequinGO = Instantiate(mannequinPref, raycastHits[0].pose.position, Quaternion.identity);
                mannequinGO.GetComponent<PHONE_MannequinTransformManager>().spawnPoint = raycastHits[0].pose.position;
                mannequinPlaced = true;
                markerGO.SetActive(false);
            }
        }
        else
        {
            // Вращение объекта
        }
    }
}
