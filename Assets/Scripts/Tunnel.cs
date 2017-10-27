﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tunnel : MonoBehaviour {
    public GameObject triangle;
    // Use this for initialization
    private Color32[] colors = { new Color32(131, 249, 244, 1), new Color32(195, 66, 221, 1) };
    void Start()
    {
        StartCreating();
    }

    void CreateThing()
    {
        Spawn(110);
    }

    void Spawn(int loc)
    {
        GameObject thing = Instantiate(triangle, new Vector3(0, 0, loc), triangle.transform.rotation);
        thing.GetComponent<TriangleMover>().speed = Random.Range(5, 20);
        Renderer rend = thing.GetComponent<Renderer>();
        rend.material.color = colors[Random.Range(0, 2)];
    }

    public void StopCreating()
    {
        CancelInvoke();
    }
    public void StartCreating()
    {
        InvokeRepeating("CreateThing", 0, 1);
        for (var i = 10; i < 100; i += 10)
        {
            Spawn((i));
        }
    }
}
