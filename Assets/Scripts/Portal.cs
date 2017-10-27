using UnityEngine;
using System.Collections;

public class Portal : MonoBehaviour {

    [Header("Cameras")]
    public Camera arCam;
    public Camera portalCam;

    void Update () {
        // Move portal camera position based on main camera distance from the portal.
        Vector3 cameraOffset = arCam.transform.position - transform.position;
        portalCam.transform.position = transform.position + cameraOffset;

        // Make portal cam face the same direction as the main camera
        portalCam.transform.rotation = Quaternion.LookRotation(arCam.transform.forward, Vector3.up);
    }
}
