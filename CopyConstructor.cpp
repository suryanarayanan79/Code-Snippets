#include <iostream>
using namespace std;

class Table{
	int* p;
	int _size;
public:
	Table(int size)
	{
		try{
		p = new int[size];
		}catch(bad_alloc xa){
			exit(EXIT_FAILURE);
		}
		_size = size;
	}
	~Table(){
		delete [] p;
	}
	Table(const Table& t);// copy constructor.

	void put(int i , int j)
	{
		if(i >= 0 && i < _size) p[i] = j;
	}

	int get(int i)	{
		return p[i];
	}
};

Table::Table(const Table& t)
{
	try{
		p = new int[t._size];
	}catch(bad_alloc xa){
		exit(EXIT_FAILURE);
	}
	for(int i = 0 ; i < t._size ; i++){
	p[i] =  t.p[i];
	}
}

int main()
{
	Table table_one(10); // created one object of type user defined "Table". 
	Table table_three(10);
	Table table_four(10);
	for(int i = 0 ; i < 10 ; i++)table_one.put(i,i);
	for(int i = 0 ; i < 10 ; i++) cout << table_one.get(i);
	cout << endl;
	Table table_two(table_one); 
	for(int i = 0 ; i < 10 ; i++) cout << table_two.get(i);
	int t = table_one.get(3);
	table_one.put(3,t*t);
	cout << endl;
	for(int i = 0 ; i < 10 ; i++) cout << table_two.get(i);
	cout << endl;
	for(int i = 0 ; i < 10 ; i++) cout << table_one.get(i);
	//////////////
	cout << endl;
	for(int i = 0 ; i < 10 ; i++)table_three.put(i,i*i);
	for(int i = 0 ; i < 10 ; i++) cout << table_three.get(i);

	table_four = table_three;
	cout << endl;
	for(int i = 0 ; i < 10 ; i++) cout << table_four.get(i);

	return 0;
}