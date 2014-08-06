#include <iostream>
#include <string>
using namespace std;
//single dimension array memmory allocation.
int main5()
{
	int var = 15;
	int *p = (int*)malloc(var * sizeof(int));
	if(p == NULL)cout << "NO memory";
	
	for(short i = 0 ; i < var ; i++)
	{
		p[i] = i*2; // similar to *(p+i)
		cout << p[i];//*(p+i) << '\t';
	}
	return 1;

}