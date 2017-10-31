using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTrigger : MonoBehaviour
{

    public Camera arCam;
    public GameObject tunnel;
    public GameObject portalExit;

    // Use this for initialization
    void Start()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("MainCamera"))
        {
            StartCoroutine(EnterTunnel());
        }
    }

    IEnumerator EnterTunnel () {
        // Use xor operator to toggle the ARWorld layer in the arCam's culling mask.
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Plane");
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Tunnel");
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("newskybox");
        GetComponent<BoxCollider>().isTrigger = false;
        tunnel.GetComponent<Tunnel>().StopCreating();

        yield return new WaitForSeconds(5);
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("ARWorld");

        yield return new WaitForSeconds(15);
        portalExit.GetComponent<BoxCollider>().isTrigger = true;
    }
}
