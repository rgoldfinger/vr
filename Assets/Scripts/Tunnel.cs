using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tunnel : MonoBehaviour {
    public GameObject triangle;
    // Use this for initialization
    private Color32[] colors = { new Color32(131, 249, 244, 1), new Color32(195, 66, 221, 1) };
    void Start()
    {
        StartCreatingForwards();
    }

    void CreateThing()
    {
        Spawn(50, -100);
    }

    void Spawn(int startLocation, int endLocation)
    {
        GameObject thing = Instantiate(triangle, new Vector3(0, 0, startLocation), triangle.transform.rotation);
        thing.GetComponent<TriangleMover>().speed = Random.Range(18, 22);
        thing.GetComponent<TriangleMover>().endLocation = endLocation;
        // If they are coming back (moving from negative to positive), rotate the triangle so it shows the color. 
        if (endLocation > 0) {
            thing.transform.Rotate(90, 180, 0);
        }
        Renderer rend = thing.GetComponent<Renderer>();
        rend.material.color = colors[Random.Range(0, 2)];
    }

    public void StopCreating()
    {
        CancelInvoke();
    }
    public void StartCreatingForwards()
    {
        InvokeRepeating("CreateThing", 0, 0.5f);
        for (var i = 10; i < 50; i += 5)
        {
            Spawn(i, -100);
        }
    }

    public void StartCreatingBackwards()
    {
        InvokeRepeating("CreateThing", 0, 0.5f);
        for (var i = -10; i > -50; i -= 5)
        {
            Spawn(i, 100);
        }
    }
}
