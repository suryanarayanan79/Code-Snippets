#include <iostream>
#include <map>
#include <string>
using namespace std;

void readitems(map<string,int> &mm)
{
	int num_accounts ;	
	int val = 1;	
	cin >> num_accounts;
	string word = "p";
	string dummy;
	getline(cin,dummy);
	while (num_accounts > 0 && num_accounts < 100000)
	{
		getline(cin,word);		
		mm[word]+= val;	
		num_accounts--;
	}
}
int main()
{
	map<string,int>m[5];
	int testcase= 0, count= 0;
	cin >> testcase;
	for(int i = 0 ; i < testcase ; i++)
	{
		readitems(m[i]);		
		cout << endl;
	}
	cout << endl;
	typedef map<string,int>::const_iterator CI;
	for(int i = 0 ; i < testcase ; i++)
	{
		for(CI p = m[i].begin(); p!= m[i].end(); ++p)
		{
			cout << p->first<<'\t';
			cout << p->second<<endl;
		}
		cout << endl;
	}
return 0;
}