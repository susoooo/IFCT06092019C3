/*
	How should the enemy behave?
		An enemy would have either a looping route (patrollers), or be stationary (guard)
			A patroller should move from checkpoint to checkpoint, but have the flexibility to be distracted off its path and then resume once the distraction wears off
			A guard should be able to be distracted too, which moves it off his guarding spot temporarily. It would put itself back in his spot once the distraction wears off.
		If an enemy touches the player, the game ends in loss.
		If an enemy sees the player, it chases the player until either it loses the player, or it touches the player.
	
	Enemy interactions with the player
		An enemy has a direction in which it is facing; around this direction vector there is a cone of vision.
		When the player enters the cone, an alertness meter fills up (as a function of player visibility, distance, occlussion,(...?)); once it fills up, the enemy has spotted the player and begins chasing.
		[...]
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {
	
	GameState game_state;
	GameObject player;
	
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		player = GameObject.FindWithTag("Player");
	}

    // Update is called once per frame
	void Update() {
		
	}
	
}
