#include <iostream>
#include <map>
#include <string>
using namespace std;

void readitems(map<string,int> &mm)
{
	int num_accounts , val= 1;	
	string word,dummy;	
	cin >> num_accounts;
	if(num_accounts > 100000)num_accounts = 100000;
	if(num_accounts < 0)num_accounts = 1;
	getline(cin,dummy);
	for(int i = 0 ; i < num_accounts ; i++)
	{
		getline(cin,word);		
		mm[word]+= val;	
	}
}
int mains()
{
	map<string,int>m[5];
	typedef map<string,int>::const_iterator CI;
	int testcase;
	cin >> testcase;
	if(testcase > 5)testcase = 5;
	if(testcase < 0)testcase = 1;

	for(int i = 0 ; i < testcase ; i++)
	{
		readitems(m[i]);		
		cout << endl;
	}
	cout << endl;

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


//int main()
//{
//	//char fname1;
//	//string names[] = new string( {"surya1","surya2","surya3"});
//	//for(int i = 0 ; i < 3 ; i++)
//	//cout << names[i]<<endl;
//	//string fname[5];
//	//showdata(names);
//	//getline(cin,fname[0],'\n');
//	//getline(cin,fname[1],'\n');
//	//getline(cin,fname[2],'\n');
//	/*cin>>fname[0];
//	cin>>fname[1];
//	cin >> fname[2];
//	*///fname[1] = "surya5";
//	//fname[2] = "surya6";
//	//for(int i = 0 ; i < 3 ; i++)
//	//	cout << fname[i]<<endl;
//
//
//}




















////int x = bank_account["surya"];
////bank_account["surya"] += 1;
////bank_account["surya"] += 1;
////bank_account["surya1"] += 1;
////bank_account["surya12"] += 2;
////bank_account["surya12"] += 1;
////bank_account["surya12"] += 1;
////bank_account["surya1"] += 1;
////const char* name = "STL_MAP";
////bank_account.insert(std::make_pair("Hello",5));
////bank_account.insert(std::make_pair("Hello",1));
////bank_account["surya02"] = 2;
//for(ac_iterator = bank_account.begin() ; ac_iterator != bank_account.end(); ac_iterator++)
//{
//	cout << (*ac_iterator).first << '\t';
//	cout << (*ac_iterator).second << endl; 
//}