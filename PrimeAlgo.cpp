#include <iostream>
#include <string>
using namespace std;
/// Question &conditions
// find the prime number between m and n.
//n < = 1000000000;
///n-m<=100000;
///m >= 1;
//testcase < = 10

int main()
{
int m,n,testcase;
int mArray[10],nArray[10];
int outArray[100000];// since n-m [MAX] = 100000
// gathering the input data
cout << "testcase\n";
cin >> testcase;
if(testcase < 1)testcase = 1;
if(testcase > 10)testcase = 10;
for(int i = 0 ; i < testcase ; i++)
{
	do
	{
		cout << "lower m\n";
		cin >> m;
		cout << "upper n\n";
		cin >> n;
	}while( (n-m) > 100000 || (n > 1000000000) || (m < 1) || (n <= m));
	mArray[i]= m;
	nArray[i]= n;
}
// prime number generation
for(int j = 0 ; j < testcase ; j++)
{
	cout << "m\t " << mArray[j] << "\tn\t" << nArray[j] << endl;
	for(int i = mArray[j] ; i < nArray[j] ; i++)
	{
		outArray[i - mArray[j]] = i;// list out all consequtive numbers. 
		printf("%d\n",outArray[i - mArray[j]]);
		// mark out not prime here as 0;
		// print	
	}
	for(int i = 0 ; i < nArray[j] ; i++)
	{
		outArray[i] 
	}
	cout << "NEXT"<<endl;
}

return 1;
}