using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Video;

public class MediaPlayerNoNarration : MonoBehaviour
{
    public GameObject testCube;

    // Use this for initialization
    void Start()
    {

    }


    void HandleRemote(string message)
    {
        testCube.SetActive(false);
    }
}
