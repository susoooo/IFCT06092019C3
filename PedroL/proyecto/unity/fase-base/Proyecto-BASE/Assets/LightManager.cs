using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightManager : MonoBehaviour {
	
	GameObject player;
	GameObject[] sources;
	Light closest_source;
	public float visibility;
	public float distance;
	float partial_visibility;
	const float max_visibility_radius = 3.0f;
	const float min_visibility = 0.05f;
	
	// Start is called before the first frame update
	void Start() {
		player = GameObject.Find("Player");
		sources = GameObject.FindGameObjectsWithTag("LightSource");
	}

    // Update is called once per frame
	void Update() {
		//Third attempt:
		float shortest_distance = Mathf.Infinity;
		
		foreach (var source in sources) { //Could be more efficient if we were using index for
			if ((distance = Vector3.Distance(player.transform.position, source.transform.position) ) < shortest_distance) {
				shortest_distance = distance;
				closest_source = source.GetComponent<Light>();
			}
		}
		
		distance = Vector3.Distance(player.transform.position, closest_source.transform.position);
		
		if (distance < max_visibility_radius) {
			visibility = 1.0f;
		} else {
			visibility =  1 / Mathf.Pow( 
				distance - max_visibility_radius + 1,
				1 / (closest_source.intensity * 0.5f)
			);
			visibility = (visibility < 0.05f) ? 0.0f : visibility;
		}
		
		//Second attempt:
		/*visibility = 0;
		
		foreach (GameObject source in light_sources) {
			distance = Vector3.Distance(player.transform.position, source.GetComponent<Light>().transform.position);
			
			if (distance < max_visibility_radius) {
				visibility += 1.0f;
			} else {
				partial_visibility = 0;
				
				partial_visibility += 
					1 / Mathf.Pow( 
						distance - max_visibility_radius + 1,
						1 / (source.GetComponent<Light>().intensity * 0.5f)
					);
				partial_visibility = (partial_visibility < 0.05f) ? 0.0f : partial_visibility;
				
				visibility += partial_visibility;
			}
		}
		
		visibility /= (light_sources.Length / 2);*/
		
		//First attempt:
		/*distance = Vector3.Distance(player.transform.position, light_sources.transform.position);
		
		if (distance < max_visibility_radius) {
			visibility = 1.0f;
		} else {
			visibility =  1 / Mathf.Pow( 
				distance - max_visibility_radius + 1,
				1 / (light_sources.intensity * 0.5f)
			);
			visibility = (visibility < 0.05f) ? 0.0f : visibility;
		}*/
	}
	
	void OnGUI() {
		GUI.Box(
			new Rect (0, 0, 150, 50),
			"light_sources.Length:\n" + sources.Length.ToString()
		);
	}
}
