using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTrigger : MonoBehaviour
{

    public Camera arCam;
    //public GameObject tunnel;
    //public GameObject otherEnd;

    // Use this for initialization
    void Start()
    {

    }

    IEnumerable OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("MainCamera"))
        {
            // Use xor operator to toggle the ARWorld layer in the arCam's culling mask.
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Plane");
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Tunnel");
            GetComponent<BoxCollider>().isTrigger = false;
            GetComponent<AudioSource>().Play();
            yield return new WaitForSeconds(5);
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("ARWorld");

            //tunnel.GetComponent<Tunnel>().StopCreating();
            //yield return new WaitForSeconds(30);
            //otherEnd.GetComponent<BoxCollider>().isTrigger = true;
        }
    }
}
