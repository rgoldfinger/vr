using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PortalTrigger : MonoBehaviour {

    public Camera arCam;

	// Use this for initialization
	void Start () {
		
	}
	
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("MainCamera"))
        {
            // Use xor operator to toggle the ARWorld layer in the arCam's culling mask.
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("ARWorld");
            arCam.cullingMask ^= 1 << LayerMask.NameToLayer("Plane");
            GetComponent<AudioSource>().Play();
        }
    }
}
