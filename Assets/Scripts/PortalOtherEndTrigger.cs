using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalOtherEndTrigger : MonoBehaviour {

    public Camera arCam;
    public GameObject tunnel;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    IEnumerable OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("MainCamera"))
        {
            tunnel.GetComponent<Tunnel>().StartCreating();
            // Use xor operator to toggle the ARWorld layer in the arCam's culling mask.
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Tunnel");
            GetComponent<BoxCollider>().isTrigger = false;
            yield return new WaitForSeconds(5);
            tunnel.GetComponent<Tunnel>().StopCreating();
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("ARWorld");
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("PortalEntrance");
        }
    }
}
