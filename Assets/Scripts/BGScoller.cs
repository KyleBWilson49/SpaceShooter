using UnityEngine;
using System.Collections;

public class BGScoller : MonoBehaviour {
	public float scrollSpeed;
	public float tileSizeZ;

	private Vector3 startPosition;

	// Use this for initialization
	void Start () {
		startPosition = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		float newPosition = Mathf.Repeat (Time.time * scrollSpeed, tileSizeZ);
		transform.position = startPosition + newPosition * Vector3.forward;
	}
}
