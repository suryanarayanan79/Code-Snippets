#include <iostream>
#include <string>
using namespace std;
void Get(int & temp);
void GetConstOfVar(const int & temp);
void ChangeVarUsingPointer(int * p);
int g_var = 111;
int main23()
{
	int i = 100;
	int j = 100;
	cout << "j's address" << &j <<'\n';
	int *p = &j; // referencing.
	Get(i); 
	cout << "insdied main function" << i << '\n';
	GetConstOfVar(i);
	cout << "Address of g_var" << &g_var <<'\n';
	cout << "p has" <<p;
	cout << "p's address" << &p;
	ChangeVarUsingPointer(p);//pass by address.
	cout << "change by ponter " << j;
	return 1;
}

void Get(int & temp)
{
	temp++; // change to reference temp  ; which refer to int i;
	cout <<"inside Get" <<temp << '\n';
}

void GetConstOfVar(const int& i)
{
	int temp = i;
	temp++;
	cout << "GetConstOfVar(i) " << i <<'\n';
	// don't have the privilage to change i var
}

void ChangeVarUsingPointer(int * temp)
{
	*temp = 300;// 
	cout <<'\n' <<"temp address" << &temp << '\n';
	cout << "temp has" << temp <<'\n';
	temp = &g_var; // trying to change the content of temp
	cout << "temp has :g_var" << temp <<'\n';
	//From above we read, temp is a copy of p in main.trying to change the content of temp will 
	// not change the p in main.
	// use poniter - to pointer to modifiy the p in main.
}