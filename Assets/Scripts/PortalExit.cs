using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalExit : MonoBehaviour {


    public Camera arCam;
    public GameObject tunnel;
    //public GameObject portalExit;

    // Use this for initialization
    void Start()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("MainCamera"))
        {
            StartCoroutine(ExitTunnel());
        }
    }

    IEnumerator ExitTunnel()
    {
        // Use xor operator to toggle the ARWorld layer in the arCam's culling mask.
        //arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Plane");
        //arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Tunnel");
        GetComponent<BoxCollider>().isTrigger = false;
        tunnel.GetComponent<Tunnel>().StartCreating();
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("ARWorld");
        arCam.cullingMask ^= 1 << LayerMask.NameToLayer("newskybox");
        yield return new WaitForSeconds(5);
        tunnel.GetComponent<Tunnel>().StopCreating();


        yield return new WaitForSeconds(30);
        //portalExit.GetComponent<BoxCollider>().isTrigger = true;
    }
}
