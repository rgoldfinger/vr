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
        source.Play();
    }
}
