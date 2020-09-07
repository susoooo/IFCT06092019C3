using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
	new Camera camera;
	new Rigidbody rigidbody;
	const float jump_multiplier = 10.0f;
	const float mouse_multiplier = 5.0f;
	const float speed_multiplier = 10.0f;
  // Start is called before the first frame update
  void Start()
  {
		Cursor.visible = false;
		Cursor.lockState = CursorLockMode.Locked;
		
		camera = GetComponent<Camera>();
		rigidbody = GetComponent<Rigidbody>();
  }

  // Update is called once per frame
  void Update()
  {
		bool jump_button = Input.GetButton("Jump");
		float horizontal_axis = Input.GetAxis("Horizontal");
		float vertical_axis = Input.GetAxis("Vertical");
		float mouse_x_axis = Input.GetAxis("Mouse X");
		float mouse_y_axis = Input.GetAxis("Mouse Y");
		
		if (horizontal_axis != 0) {
			transform.Translate(Vector3.right * vertical_axis * Time.deltaTime);
		}
    if (vertical_axis != 0) {
			transform.Translate(Vector3.forward * speed_multiplier * vertical_axis * Time.deltaTime);
		}
		if (jump_button) {
			Debug.Log(Vector3.up);
			rigidbody.AddForce(Vector3.up * jump_multiplier);
		}
		
		if (mouse_x_axis != 0) {
			transform.Rotate(
				Vector3.up,
				mouse_multiplier * mouse_x_axis,
				Space.World
			);
		}
		if (mouse_y_axis != 0) {
			camera.transform.Rotate(
				Vector3.left,
				mouse_multiplier * mouse_y_axis,
				Space.Self
			);
		}
  }
}
