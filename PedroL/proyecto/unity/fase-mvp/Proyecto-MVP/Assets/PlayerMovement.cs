using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {
	
	GameState game_state;
	GameObject main_camera;
	new Rigidbody rigidbody;
	const float jump_multiplier = 300.0f;
	const float mouse_multiplier = 5.0f;
	const float speed_multiplier = 10.0f;
	bool jump_button;
	float horizontal_axis;
	float vertical_axis;
	float mouse_x_axis;
	float mouse_y_axis;
	
  // Start is called before the first frame update
  void Start() {
		game_state = GameObject.FindObjectOfType<GameState>();
		
		Cursor.visible = false;
		Cursor.lockState = CursorLockMode.Locked;
		
		main_camera = GameObject.FindGameObjectWithTag("MainCamera");
		rigidbody = GetComponent<Rigidbody>();
  }

  // Update is called once per frame
  void Update() {
		jump_button = Input.GetButtonDown("Jump");
		horizontal_axis = Input.GetAxis("Horizontal");
		vertical_axis = Input.GetAxis("Vertical");
		mouse_x_axis = Input.GetAxis("Mouse X");
		mouse_y_axis = Input.GetAxis("Mouse Y");
		
		if (horizontal_axis != 0) {
			transform.Translate(Vector3.right * speed_multiplier * horizontal_axis * Time.deltaTime);
		}
    if (vertical_axis != 0) {
			transform.Translate(Vector3.forward * speed_multiplier * vertical_axis * Time.deltaTime);
		}
		if (jump_button) {
			if (Physics.Raycast(transform.position, Vector3.down, 1.5f)) {
				rigidbody.AddForce(Vector3.up * jump_multiplier);
			}
		}
		
		if (mouse_x_axis != 0) {
			transform.Rotate(
				0.0f,
				mouse_multiplier * mouse_x_axis,
				0.0f,
				Space.World
			);
		}
		if (mouse_y_axis != 0) {
			main_camera.transform.Rotate(
				-mouse_multiplier * mouse_y_axis,
				0.0f,
				0.0f,
				Space.Self
			);
			main_camera.transform.Translate(
				0.0f,
				-0.30f * mouse_y_axis,
				-0.15f * mouse_y_axis
			);
		}
  }
	
	void OnCollisionEnter(Collision collision) {
		Debug.Log(collision.collider.name + " collision");
		
		if (collision.gameObject.tag == "Key") {
			collision.gameObject.SetActive(false);
			game_state.update_key_count();
		}
	}
	
	void OnGUI() {
		GUI.Box(
			new Rect (0, 0, 150, 50),
			"main_camera.transform.rotation.eulerAngles.x:\n" + main_camera.transform.rotation.eulerAngles.x.ToString()
		);
	}
	
}