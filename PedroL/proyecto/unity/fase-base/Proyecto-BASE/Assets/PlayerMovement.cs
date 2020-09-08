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
				Vector3.up,
				mouse_multiplier * mouse_x_axis,
				Space.World
			);
		}
		if (mouse_y_axis != 0) {
			main_camera.transform.Rotate(
				Vector3.left,
				mouse_multiplier * mouse_y_axis,
				Space.Self
			);
			
			Debug.Log(main_camera.transform.rotation.eulerAngles);
			
		}
		
  }
	
	void OnCollisionEnter(Collision collision) {
		Debug.Log(collision.collider.name + " collision");
		
		if (collision.gameObject.tag == "Key") {
			collision.gameObject.SetActive(false);
			game_state.update_key_count();
		}
		
	}
	
}
