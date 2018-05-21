using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAudioOnEnter : MonoBehaviour {

	public AudioSource audio;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	private void OnTriggerEnter (Collider other) {
		if (other.CompareTag ("Player"))
			audio.Play ();
	}
}