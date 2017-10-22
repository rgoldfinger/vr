using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MicInput : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {
        AudioSource source = GetComponent<AudioSource>();
        source.clip = Microphone.Start(null, true, 10, 44100);
        source.loop = true;
        while (!(Microphone.GetPosition(null) > 0)) { }
        //Debug.Log("start playing... position is " + Microphone.GetPosition(null));
        source.Play();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
