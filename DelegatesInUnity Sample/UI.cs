using UnityEngine;
using System.Collections;

public class UI : MonoBehaviour {
	
	void OnGUI(){
		if(GUI.Button(new Rect(10,10,100,50),"BUTTON")){
			// fire the event.
			//EventManager.Invoke();
			EventManager.InvokeWithParm(true);
		}
	}
}
