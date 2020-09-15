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
	bool can_be_seen;
	Vector3 player_direction;
	float angle_from_forward;
	
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		player = GameObject.FindWithTag("Player");
	}

    // Update is called once per frame
	void Update() {
		player_direction = -transform.position + player.transform.position;
		angle_from_forward = Vector3.Angle(transform.TransformDirection(Vector3.forward), player_direction);
		can_be_seen = angle_from_forward < 20.0f;
		
		Physics.Raycast(transform.position, -transform.position + player.transform.position, out hit, 15.0f);
		can_be_seen = (hit.collider.name == "Player") ? can_be_seen : false;
		
		Debug.Log("angle_from_forward: " + angle_from_forward.ToString());
	}
	
	void OnFixedUpdate() {
		//Physics.Raycast(transform.position, -transform.position + player.transform.position, out hit, 15.0f);
	}
	
	void OnDrawGizmos() {
		Gizmos.color = can_be_seen ? Color.red : Color.white;
		
		Gizmos.DrawRay(transform.position, -transform.position + player.transform.position);
		Gizmos.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * 15);
	}
	
}
