using System;
delegate void DelegateMethod();
namespace FirstCSha
{
	public class EventsAndDelegatesExample
	{

	class Me{
		public static void OpenTheDoor(){
			Console.WriteLine("Open the door");
					
		}	
		public static void GototheDoor(){
			Console.WriteLine("Go to the door");
					
		}
	}
		

		public static void Main (string[] args){
			//Console.WriteLine("Hello EventsAndDelegatesExample");
			ClassX xObj = new ClassX();
			ClassY yObj = new ClassY();
			
			EventClass EObj = new EventClass();
			EObj.event_knockTheDoor += Me.OpenTheDoor;
			EObj.event_knockTheDoor += Me.GototheDoor;
			EObj.event_knockTheDoor += xObj.SomeActionX;
			EObj.event_knockTheDoor += yObj.SomeActionY;
			EObj.KnockTheDoor();
			EObj.event_knockTheDoor -= Me.OpenTheDoor;
			EObj.event_knockTheDoor -= Me.GototheDoor;
			EObj.event_knockTheDoor -= xObj.SomeActionX;
			EObj.KnockTheDoor();
		}

	}

	
	class EventClass{
	public event DelegateMethod event_knockTheDoor;
		//call this to fire the event
		public void KnockTheDoor(){
			if(event_knockTheDoor != null)
				event_knockTheDoor();
		}
				public void KnockTheDoorTwice(){
			if(event_knockTheDoor != null)
				event_knockTheDoor();
		}
}
	
		class ClassX{
		public void SomeActionX(){
			Console.WriteLine("SomeAction X");	
			}
	}
		class ClassY{
		public void SomeActionY(){
				Console.WriteLine("SomeAction Y");
			}
	}
}

