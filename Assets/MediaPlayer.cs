using System.Collections;
using System.Collections.Generic;
using UnityEngine.Video;
using UnityEngine.Audio;
using UnityEngine;

public class MediaPlayer : MonoBehaviour {
    private VideoPlayer videoPlayer;
    private VideoSource videoSource;
    public VideoClip[] videoClips;
    public VideoClip staticClip;
    public GameObject screen;

    private AudioSource audioSource;
    public AudioClip introClip;

    private System.DateTime waitForTime;
    private bool mediaStarted;

	// Use this for initialization
	void Start () {
        waitForTime = System.DateTime.Now.AddSeconds(30);
        mediaStarted = false;
        screen.SetActive(false);

	}
	
	// Update is called once per frame
	void Update () {
        System.DateTime now = System.DateTime.Now;
        
        if (mediaStarted == false && now.Second % 15 == 0 &&  System.DateTime.Compare(waitForTime, now) == 1) {
            mediaStarted = true;
            StartCoroutine(playIntroAudio());
        }
	}
    
    IEnumerator playIntroAudio()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
        audioSource.clip = introClip;

        audioSource.Play();

        Debug.Log("Playing Intro Clip");
        while (audioSource.isPlaying)
        {
            yield return null;
        }

        Debug.Log("Done Playing Intro Clip");
        StartCoroutine(playVideo());
    }

    IEnumerator playVideo()
    {
        screen.SetActive(true);


        videoPlayer = gameObject.GetComponent<VideoPlayer>();

        videoPlayer.source = VideoSource.VideoClip;

        // Start static video
        videoPlayer.clip = staticClip;
        videoPlayer.Prepare();

        //Wait until video is prepared
        while (!videoPlayer.isPrepared)
        {
            Debug.Log("Preparing Static Video");
            yield return null;
        }

        //Play Video
        videoPlayer.Play();


        Debug.Log("Playing Static Video");
        while (videoPlayer.isPlaying)
        {
            yield return null;
        }

        Debug.Log("Done Playing Static Video");

        // Start random video

        // TODO get random clip based on time
        // current minutes mod videoClips.length
        int index = System.DateTime.Now.Minute % videoClips.Length;
        videoPlayer.clip = videoClips[index];
        videoPlayer.Prepare();

        //Wait until video is prepared
        while (!videoPlayer.isPrepared)
        {
            Debug.Log("Preparing Random Video");
            yield return null;
        }

        //Play Video
        videoPlayer.Play();


        Debug.Log("Playing Random Video");
        while (videoPlayer.isPlaying)
        {
            yield return null;
        }

        Debug.Log("Done Playing Random Video");
    }
}



////Raw Image to Show Video Images [Assign from the Editor]
//public RawImage image;
////Video To Play [Assign from the Editor]
//public VideoClip videoToPlay;



////Audio


//// Use this for initialization
//void Start()
//{
//    Application.runInBackground = true;
//    StartCoroutine(playVideo());
//}



//videoPlayer.clip = videoToPlay;
        //videoPlayer.Prepare();

        ////Wait until video is prepared
        //while (!videoPlayer.isPrepared)
        //{
        //    Debug.Log("Preparing Video");
        //    yield return null;
        //}

        //Debug.Log("Done Preparing Video");

        ////Assign the Texture from Video to RawImage to be displayed
        ////image.texture = videoPlayer.texture;

        ////Play Video
        //videoPlayer.Play();

        ////Play Sound
        ////audioSource.Play();

        //Debug.Log("Playing Video");
        //while (videoPlayer.isPlaying)
        //{
        //    Debug.LogWarning("Video Time: " + Mathf.FloorToInt((float) videoPlayer.time));
        //    yield return null;
        //}