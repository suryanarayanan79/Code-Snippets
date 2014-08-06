using System.Collections;

public static class EventManager  {
	public static event DelegateMethod StartAnim;
	public static event DelegateMethod<bool> EventTypeWithOneParameter;
	public static void Invoke(){
		if(StartAnim != null)StartAnim();
	}
	public static void InvokeWithParm(bool temp){
		if(EventTypeWithOneParameter != null)
			EventTypeWithOneParameter(temp); 
	}
	
}
