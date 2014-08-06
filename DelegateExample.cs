using System;
delegate  void MyMethod(ref string s);
namespace FirstCSha
{
	class MainClass
	{
		public static void Main (string[] args){
			string ss = "HELLO Game World";
			MyMethod foo;
			MyMethod fool = ReplaceString;
			MyMethod foow = PrintLowerString;
			foo = fool;
			foo += foow;
			foo(ref ss);
			
			Console.WriteLine (ss);
		}
		public static void ReplaceString(ref string s){
			s = s.Replace(" ", "$");
		}
			public static void PrintLowerString(ref string s){
			 s = s.Replace("$","*");
		}
	}
}
