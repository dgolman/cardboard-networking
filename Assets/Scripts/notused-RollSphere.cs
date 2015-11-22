using UnityEngine;
using System.Collections;

public class RollSphere : MonoBehaviour {
	// THOUGHT THIS MIGHT BE NEEDED BUT IT ISN'T BECAUSE PHYSICS ALREADY MAKES THE SPHERE ROLL AWAY FROM
	// YOU WHEN YOU BUMP IT

	public float speed;   // use this as speed multiplier
	private Rigidbody rb; // this is the object's rigidbody

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// this is where physics code goes
	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");
		Vector3 movement = new Vector3 (moveHorizontal, 0, moveVertical);
		rb.AddForce (movement * speed);
		
	}

}
