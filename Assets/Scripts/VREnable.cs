using System;
using System.Collections;
using UnityEngine;
using UnityEngine.VR;

public class VREnable : MonoBehaviour {
    //bool isEnableVR = false;
    //bool isVRinProgres = false;

    void Start () {
        SetupVR (true);
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    //void OnGUI()
    //{
    //    if (!isVRinProgres && GUI.Button(new Rect((Screen.width) * 0.1f, (Screen.height) * 0.1f, (Screen.width) * 0.1f, (Screen.height) * 0.1f), "VR:" + isEnableVR.ToString()))
    //    {
    //        isVRinProgres = true;
    //        isEnableVR = !isEnableVR;
    //        SetupVR(isEnableVR);
    //    }
    //}

    /// ////////////////  VR CODE here

    public void SetupVR (bool isVR) {
        Camera[] camers = (Camera[]) FindObjectsOfType<Camera> ();
        StartCoroutine (LoadDevice (isVR, camers));
    }

    IEnumerator LoadDevice (bool isVR, Camera[] camers) {
        // VRDeviceName none
        string newDevice = UnityEngine.XR.XRSettings.supportedDevices.Length > 0 ? UnityEngine.XR.XRSettings.supportedDevices[0] : "none";
        if (isVR) {
            //VRDeviceName Cardboard or Split
#if UNITY_EDITOR
            newDevice = "Split";
#else
            newDevice = UnityEngine.XR.XRSettings.supportedDevices.Length > 1 ? UnityEngine.XR.XRSettings.supportedDevices[1] : "none";
#endif
        }
        Debug.Log ("VRDeviceName " + newDevice);
        UnityEngine.XR.XRSettings.LoadDeviceByName (newDevice);
        yield return null;
        Debug.Log (UnityEngine.XR.XRSettings.loadedDeviceName + " is loaded");
#if !UNITY_EDITOR
        foreach (Camera cam in camers) {
            if (cam != null) {
                UnityEngine.XR.XRDevice.DisableAutoXRCameraTracking (cam, isVR);
            }
        }
        if (Camera.main)
            UnityEngine.XR.XRDevice.DisableAutoXRCameraTracking (Camera.main, isVR);
#endif
        UnityEngine.XR.XRSettings.enabled = isVR;
        //isVRinProgres = false;
    }
    /// ////////////////  VR CODE End
}