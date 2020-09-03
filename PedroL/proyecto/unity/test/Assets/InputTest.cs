using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputTest : MonoBehaviour {
	public GameObject controllable;
	float horizontal_x;
	float vertical_z;
	bool fire1;
	float multiplier = 10;
	
	// Start is called before the first frame update
	void Start() {
		
	}

	// Update is called once per frame
	void Update() {
		horizontal_x = Input.GetAxis("Mouse X");
		vertical_z = Input.GetAxis("Mouse Y");
		fire1 = Input.GetButton("Fire1");
		
		if (horizontal_x != 0 && fire1) {
			Debug.Log("Horizontal X: " + horizontal_x);	
			controllable.transform.Translate(
				multiplier * horizontal_x * Time.deltaTime,
				0,
				0
			);
		}
		if (vertical_z != 0 && fire1) {
			Debug.Log("Vertical: Z" + vertical_z);	
			controllable.transform.Translate(
				0,
				0,
				multiplier * vertical_z * Time.deltaTime
			);
		}
	}
}
