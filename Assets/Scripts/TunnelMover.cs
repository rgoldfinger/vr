using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TunnelMover : MonoBehaviour {

    public float speed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Vector3 t = Camera.main.transform.position + new Vector3(0, 0, -100);

        float step = speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, t, step);
	}
}
