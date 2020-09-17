/*
	How should the enemy behave?
		An enemy would have either a looping route (patrollers), or be stationary (guard)
			A patroller should move from checkpoint to checkpoint, but have the flexibility to be distracted off its path and then resume once the distraction wears off
			A guard should be able to be distracted too, which moves it off his guarding spot temporarily. It would put itself back in his spot once the distraction wears off.
		If an enemy touches the player, the game ends in loss.
		If an enemy sees the player, it chases the player until either it loses the player, or it touches the player.
	
	Enemy interactions with the player
		An enemy has a direction in which it is facing; around this direction vector there is a cone of vision.
		When the player enters the cone, a contact meter fills up (as a function of player visibility, distance, occlussion,(...?)); once it fills up, the enemy has spotted the player and begins chasing.
		If there isn't an uninterrupted ray from the enemy to the player that is within this cone, the enemy can't see the player and any contact meter depletes.
		If a chasing enemy loses contact, it will search around the last seen spot, then return to its checkpoint route
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {
	
	GameState game_state;
	GameObject player;
	RaycastHit hit;
	const float max_detection_distance = 15.0f;
	const float max_detection_angle = 45.0f;
	const float detection_sensibility = 1.0f;
	bool ray_did_hit;
	bool in_sight;
	float contact_meter;
	Vector3 player_direction;
	float angle_from_forward;
	
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		player = GameObject.FindWithTag("Player");
		contact_meter = 0;
		ray_did_hit = false;
	}

    // Update is called once per frame
	void Update() {
		player_direction = -transform.position + player.transform.position;
		angle_from_forward = Vector3.Angle(transform.TransformDirection(Vector3.forward), player_direction);
		
		ray_did_hit = Physics.Raycast(transform.position, -transform.position + player.transform.position, out hit, max_detection_distance);
		in_sight = 
			ray_did_hit && 
			(hit.collider.name == "Player") && 
			(angle_from_forward < max_detection_angle);
		
		if (in_sight) {
			contact_meter += 
				Normalize_Bounded_Value(max_detection_angle, angle_from_forward) * 
				Normalize_Bounded_Value(max_detection_distance, hit.distance) * 
				detection_sensibility * 
				Time.deltaTime;
			contact_meter = (contact_meter > 100.0f) ? 100.0f : contact_meter;
		} else {
			contact_meter -= 33.0f * Time.deltaTime;
			contact_meter = (contact_meter < 0.0f) ? 0.0f : contact_meter;
		}
		
		Debug.Log("angle: " + angle_from_forward);
	}
	
	float Normalize_Bounded_Value(float lower_bound, float upper_bound, float value) {
		return (value - upper_bound) / (lower_bound - upper_bound);
	}
	
	float Normalize_Bounded_Value(float upper_bound, float value) {
		return (value - upper_bound) / upper_bound;
	}
	
	void OnFixedUpdate() {
		//raycast = Physics.Raycast(transform.position, -transform.position + player.transform.position, out hit, max_detection_distance);
	}
	
	void OnDrawGizmos() {
		Gizmos.color = in_sight ? Color.red : Color.white;
		
		//Visualization of angle between enemy's facing direction and direction to player
		Gizmos.DrawRay(transform.position, -transform.position + player.transform.position);
		Gizmos.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * max_detection_distance);
		
		Gizmos.DrawSphere(transform.position + (Vector3.up * 1.5f), contact_meter * 0.003f);
	}
	
}
