#include <iostream>
#include <string>
using namespace std;
#include "ExampleInLine.h"
// Note paranthesis every thing in macro.
#define F(x) (x+ 1)
#define FLOOR(x,b) x>b?0:1 // version 1

int main()
{
	ExampleInLine a ;
	a.Non_inLineTestPrograme();
	//a.InLineTestPrograme();
	//a.Non_inLineTestPrograme();
	return 1;
}