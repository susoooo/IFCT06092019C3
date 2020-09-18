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

// contact_meter BECOMES alertness
//
// Patrolling --[ last_alertness < alertness && alertness > 50.0f ]--> Searching
//
// Searching --[ last_alertness > alertness && alertness == 0.0f ]--> Patrolling
// Searching --[ last_alertness < alertness && alertness == 100.0f ]--> Chasing
//
// Chasing --[ last_alertness > alertness && alertness < 80.0f ]--> Searching

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour {
	
	GameState game_state;
	GameObject player;
	const float max_detection_distance = 15.0f, max_detection_angle = 45.0f, detection_sensibility = 500.0f;
	bool in_sight;
	float contact_meter;
	NavMeshAgent agent;
	public GameObject checkpoint_group;
	Transform[] checkpoints;
	int next_checkpoint = 1;
	
	// Unity handlers
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		player = GameObject.FindWithTag("Player");
		agent = GetComponent<NavMeshAgent>();
		checkpoints = checkpoint_group.GetComponentsInChildren<Transform>();
		
		contact_meter = 0;
		
		agent.autoBraking = true;
	}

	void Update() {
		Player_Contact();
		Patrol();
	}
	
	void OnDrawGizmos() {
		Gizmos.color = in_sight ? Color.red : Color.white;
		
		Gizmos.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * max_detection_distance);
		Gizmos.DrawSphere(transform.position + (Vector3.up * 1.5f), contact_meter * 0.003f);
		Gizmos.DrawRay(transform.position, -transform.position + checkpoints[next_checkpoint - 1].position);
	}
	
	// Local methods
	void Patrol() {
		if (!agent.pathPending && agent.remainingDistance < 0.5f) {
			Move_To_Next_Checkpoint();
		}
	}
	
	void Chase() {
		//
	}
	
	void Search() {
		//
	}
	
	void Move_To_Next_Checkpoint() {
		if (checkpoints.Length == 0) { 
			return;
		}
		
		agent.destination = checkpoints[next_checkpoint].position;
		next_checkpoint = (next_checkpoint + 1) % checkpoints.Length;
		next_checkpoint = (next_checkpoint == 0) ? 1 : next_checkpoint;
	}
	
	void Player_Contact() {
		RaycastHit hit;
		Vector3 player_direction = -transform.position + player.transform.position;
		float angle_from_forward = Vector3.Angle(transform.TransformDirection(Vector3.forward), player_direction);
		bool ray_did_hit = Physics.Raycast(transform.position, -transform.position + player.transform.position, out hit, max_detection_distance);
		
		in_sight = ray_did_hit && (hit.collider.name == "Player") && (angle_from_forward < max_detection_angle);
		
		if (in_sight) {
			contact_meter += 
				Normalize_Bounded_Value(max_detection_angle, angle_from_forward) * 
				Normalize_Bounded_Value(max_detection_distance, hit.distance) * 
				detection_sensibility * 
				Time.deltaTime;
			contact_meter = (contact_meter > 100.0f) ? 100.0f : contact_meter;
		} else {
			contact_meter -= 100.0f * Time.deltaTime;
			contact_meter = (contact_meter < 0.0f) ? 0.0f : contact_meter;
		}
	}
	
	float Normalize_Bounded_Value(float lower_bound, float upper_bound, float value) {
		return (value - upper_bound) / (lower_bound - upper_bound);
	}
	
	float Normalize_Bounded_Value(float upper_bound, float value) {
		return (value - upper_bound) / upper_bound;
	}
}

/*
class BehaviourState {
	float alertness, last_alertness;
	enum Behaviour {
		patrolling,
		searching,
		chasing,
	}
	Behaviour behaviour;
	Vector3 player_last_seen;
	
	void Update() {
		
		//player_last_seen
	}
}
*/