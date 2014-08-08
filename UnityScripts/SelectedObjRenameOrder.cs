using UnityEngine;
using UnityEditor;
using System.Collections;

public class SelectedObjRenameOrder : ScriptableObject {

	public static void SelectedObjRename(){
		Transform[] transform = Selection.GetTransforms(SelectionMode.TopLevel);
		int ObjCount = 0;
		foreach(Transform obj in transform){
			obj.name +=  ObjCount++;
		}
	}
}
