using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tunnel : MonoBehaviour {
    public GameObject square;
    // Use this for initialization
    private Color32[] colors = { new Color32(131, 249, 244, 1), new Color32(195, 66, 221, 1) };
    void Start () {
        InvokeRepeating("CreateThing", 0, 1);
    }

    void CreateThing () {
        GameObject thing = Instantiate(square, new Vector3(0.4f, -0.4f, 110), square.transform.rotation);
        thing.GetComponent<TunnelMover>().speed = Random.Range(5, 20);
        Renderer rend = thing.GetComponent<Renderer>();
        rend.material.color = colors[Random.Range(0, 2)];
    }
}
