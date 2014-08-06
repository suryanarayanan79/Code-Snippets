using UnityEngine;
using System.Collections;

public class UI : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
	
	}
	
	//Update is called once per frame
	void Update () {
	
	}
	
	void OnGUI(){
		if(GUI.Button(new Rect(10,10,100,50),"BUTTON")){
			// fire the event.
			//EventManager.Invoke();
			EventManager.InvokeWithParm(true);
		}
	}
}
