using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugIMGUI : MonoBehaviour {
	
	GameState game_state;
	GameObject player;
	Light light_source;
	float visibility;
	// Start is called before the first frame update
	void Start() {
		game_state = GameObject.Find("Empty").GetComponent<GameState>();
		player = GameObject.Find("Player");
		light_source = GameObject.Find("Point Light").GetComponent<Light>();
	}

	// Update is called once per frame
	void Update() {
		//TODO: rearrange this as you would a function such that: x>1=1; 0.05>x<1=visibility; x<0.05=0
		visibility = 
			1 / Mathf.Pow(
				Vector3.Distance(player.transform.position, light_source.transform.position) - 3.0f, 
				(light_source.intensity * 0.6f)
			);
		visibility = (visibility > 1.0f) ? 1.0f : visibility;*/
		visibility = (visibility < 0.05f) ? 0.0f : visibility;*/
	}
	
	void OnGUI()
  {
    GUI.Box(
			new Rect ( (Screen.width / 2) - 50, 0, 100, 50),
			"visibility:\n" + visibility.ToString()
		);
		
		/*if (game_state.keys_left == 0) {
			GUI.Box(
				new Rect (
					Screen.width / 2 - 50,
					Screen.height / 2 - 12,
					100,
					24
				),
				"ur so good" 
			);
		}*/
  }
	
	void OnDrawGizmos() {
		
	}
	
}
