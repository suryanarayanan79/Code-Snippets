#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
using namespace std;
void GetReference(int& temp);
void GetConstReferenceVar(const int& temp);
void ChangeVarUsingPointer(int* p);
void ChangeVarUsingConstPointer(const int* p );
void ChangeVarUsingPointerConst(int* const p);
void ChangeVarUsingPointerReference(int*& temp);// in C++ 
//void ChangeVarUsingPointerReference(int ** temp);// in C
int g_var = 111;
int main()
{
	int i = 100;
	int* iPtr = NULL; // ponter referencing.
	iPtr = &i;
	int& r = i;
	cout << "i value  " <<'\t'<< i <<'\n';
	//cout << "k value  " <<'\t'<< k <<'\n';
	//cout << "g_var value  " <<'\t'<< g_var <<'\n';

	//GetReference(r); // pass  by reference
	//cout << "i has changed using reference in GetReference as	" << i << '\n';

//	GetConstReferenceVar(r);// pass  by reference
//	cout << "i has changed using reference in GetConstReferenceVar(i) as" << i << '\n';

//	ChangeVarUsingPointer(iPtr);//pass by address.
//	cout << "i has changed using reference in ChangeVarUsingPointer(iPtr) as	" << i << '\n';

//	ChangeVarUsingConstPointer(iPtr);
//	cout << "i has changed using reference in ChangeVarUsingConstPointer(iPtr) as	" << i << '\n';

//	cout << *iPtr <<'\t'<< "p ponits to value after  ChangeVarUsingConstPointer(p)  p = &j;" <<'\n';
//	ChangeVarUsingPointerConst(iPtr);
//	cout << "i has changed using reference in ChangeVarUsingPointerConst(iPtr) as	" << i << '\n';
	//cout << "change by ponter " << j;
	ChangeVarUsingPointerReference(iPtr);
	cout << "i is changed using pointer reference" <<'\t'<<i <<'\n';

	  int number = 88;          // Declare an int variable called number
   int & refNumber = number; // Declare a reference (alias) to the variable number
                             // Both refNumber and number refer to the same value
 
   cout << number << endl;    // Print value of variable number (88)
   cout << refNumber << endl; // Print value of reference (88)
 
   refNumber = 99;            // Re-assign a new value to refNumber
   cout << refNumber << endl;
   cout << number << endl;    // Value of number also changes (99)
 
   number = 55;               // Re-assign a new value to number
   cout << number << endl;
   cout << refNumber << endl; // Value of refNumber also changes (55)

   //////////////////////

	return 1;
}


void GetReference(int& temp)
{
	//temp++; // change to reference temp  ; which refer to int i;
	temp = g_var;
	cout <<"temp changed using GetReference	" <<  temp << '\n';
}

void ChangeVarUsingPointer(int* temp)
{
	//(*temp)++;  
	temp = &g_var; // trying to change the content of temp
	//(*temp);
	cout << "Temp in ChangeVarUsingPointer" <<'t'<< *temp <<'\n';
}

void GetConstReferenceVar(const int& j)
{
	//j++; // error const can not be modified here.
	int temp = j;
	temp++;
	//j = g_var;// error const can not be modified here.
	cout << "Actual i in GetConstReferenceVar(i)  can NOT be changed " <<'\t'<< temp <<'\n';
	//cout << "In GetConstReferenceVar(i)don't have the privilage to change i" <<'\t'<< i <<'\n';

	// don't have the privilage to change original i var
}


void ChangeVarUsingConstPointer(const int* temp)
{
//	(*temp)++;//  compile error u can not modify the value it points.// IMP but u camn modfify the address of the pointer.
	temp = &g_var; // trying to change the content of temp
	cout << "Temp is modified using ConstPointer" <<'\t'<< *temp <<'\n';
}



void ChangeVarUsingPointerConst(int* const temp)
{
	(*temp)++;// = 300;//  
	//cout <<'\n' <<"temp address" << &temp << '\n';
	cout << "Temp is modified using Pointer Const" <<'\t'<< *temp <<'\n';
	//temp = &g_var; // trying to change the content of temp error u can not modify the value of the temp.
	//cout << "temp has :g_var" << temp <<'\n';
	//From above we read, temp is a copy of p in main.trying to change the content of temp will 
	// not change the p in main.
	// use poniter - to pointer to modifiy the p in main.
}

void ChangeVarUsingPointerReference(int*& temp) //  is it ponter refernce 
{ // int&* p;
//temp = &g_var;
(*temp)++;
//temp++;// here address is incremneted. not the value it points . since ur passing a pointer type.
cout << '\n'<<"Temp value in ChangeVarUsingPointerReference" <<'\t'<<*temp <<'\n';
}


 
int mainc() {
   const int SIZE = 5;
   int * pArray;
 
   pArray = new int[SIZE];  // Allocate array via new[] operator
 
   // Assign random numbers between 0 and 99
   for (int i = 0; i < SIZE; ++i) {
      *(pArray + i) = rand() % 100;
   }
   // Print arary
   for (int i = 0; i < SIZE; ++i) {
      cout << *(pArray + i) << " ";
   }
   cout << endl;
 
   delete[] pArray;  // Deallocate array via delete[] operator
   return 0;
}

//You should not pass Function's local variable as return value by reference

/* Test passing the result (TestPassResultLocal.cpp) */
 
int * squarePtr(int);
int & squareRef(int);
 
int mains() {
   int number = 8;
   cout << number << endl;  // 8
   cout << *squarePtr(number) << endl;  // ??
   cout << squareRef(number) << endl;   // ??
   return 0;
}
 
int * squarePtr(int number) {
   int localResult = number * number;
   return &localResult;
      // warning: address of local variable 'localResult' returned
}
 
int & squareRef(int number) {
   int localResult = number * number;
   return localResult;
      // warning: reference of local variable 'localResult' returned
}

//Passing the Return-value as Reference
//You can also pass the return-value as reference or pointer. For example,

/* Passing back return value using reference (TestPassByReferenceReturn.cpp) */
 
int & squareRef(int &);
int * squarePtr(int *);
 
int main() {
   int number1 = 8;
   cout <<  "In main() &number1: " << &number1 << endl;  // 0x22ff14
   int & result = squareRef(number1);
   cout <<  "In main() &result: " << &result << endl;  // 0x22ff14
   cout << result << endl;   // 64
   cout << number1 << endl;  // 64
 
   int number2 = 9;
   cout <<  "In main() &number2: " << &number2 << endl;  // 0x22ff10
   int * pResult = squarePtr(&number2);
   cout <<  "In main() pResult: " << pResult << endl;  // 0x22ff10
   cout << *pResult << endl;   // 81
   cout << number2 << endl;    // 81
}
 
int & squareRef(int & rNumber) {
   cout <<  "In squareRef(): " << &rNumber << endl;  // 0x22ff14
   rNumber *= rNumber;
   return rNumber;
}
 
int * squarePtr(int * pNumber) {
   cout <<  "In squarePtr(): " << pNumber << endl;  // 0x22ff10
   *pNumber *= *pNumber;
   return pNumber;
}

//5.1  Function Pointer
//In C/C++, functions, like all data items, have an address. The name of a function is the starting address where the function resides in the memory, and therefore, can be treated as a pointer. We can pass a function pointer into function as well. The syntax for declaring a function pointer is:
// Function-pointer declaration
//return-type (* function-ptr-name) (parameter-list)
 
// Examples
double (*fp)(int, int)  // fp points to a function that takes two ints and returns a double (function-pointer)
double *dp;             // dp points to a double (double-pointer)
double *fun(int, int)   // fun is a function that takes two ints and returns a double-pointer

doube f(int, int);      // f is a function that takes two ints and returns a double
fp = f;                 // Assign function f to fp function-pointer

//A void pointer can hold address of any data type (except function pointer). We cannot operate on the object pointed to by void pointer, as the type is unknown. We can use a void pointer to compare with another address.
//[TODO] Example

Non-constant pointer to constant data: Data pointed to CANNOT be changed; but pointer CAN be changed to point to another data. For example,
int i1 = 8, i2 = 9;
const int * iptr = &i1;  // non-constant pointer pointing to constant data
// *iptr = 9;   // error: assignment of read-only location
iptr = &i2;  // okay
Constant pointer to non-constant data: Data pointed to CAN be changed; but pointer CANNOT be changed to point to another data. For example,
int i1 = 8, i2 = 9;
int * const iptr = &i1;  // constant pointer pointing to non-constant data
                         // constant pointer must be initialized during declaration
*iptr = 9;   // okay
// iptr = &i2;  // error: assignment of read-only variable
Constant pointer to constant data: Data pointed to CANNOT be changed; and pointer CANNOT be changed to point to another data. For example,
int i1 = 8, i2 = 9;
const int * const iptr = &i1;  // constant pointer pointing to constant data
// *iptr = 9;   // error: assignment of read-only variable
// iptr = &i2;  // error: assignment of read-only variable
Non-constant pointer to non-constant data: Data pointed to CAN be changed; and pointer CAN be changed to point to another data. For example,
int i1 = 8, i2 = 9;
int * iptr = &i1;  // non-constant pointer pointing to non-constant data
*iptr = 9;   // okay
iptr = &i2;  // okay
//http://www.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html