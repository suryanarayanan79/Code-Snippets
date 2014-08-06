#include <iostream>
using namespace std;

/*It is important to understand that C++ defines two distinct types of situations in
which the value of one object is given to another. The first is assignment. The second is
initialization, which can occur any of three ways:
1 When one object explicitly initializes another, such as in a declaration
2 When a copy of an object is made to be passed to a function
3 When a temporary object is generated (most commonly, as a return value)
The copy constructor applies
*/
// All the three are showed bellow.
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
		cout << "Constructor is called here"<< endl;
	}
	~Table(){
		delete [] p;
		//ObjectCount--;
	}
	Table(const Table& t);// copy constructor.

	void put(int i , int j)
	{
		if(i >= 0 && i < _size) p[i] = j;
	}

	int get(int i){
		return p[i];
	}
};
Table foo()
	{
		Table temp(10);
		return temp;
	}

Table::Table(const Table& t)
{
	try{
		p = new int[t._size];
		cout << "Copy Constructor is called here"<<endl;
	}catch(bad_alloc xa){
		exit(EXIT_FAILURE);
	}
	for(int i = 0 ; i < t._size ; i++){
	p[i] =  t.p[i];
	}
	//ObjectCount++;
}

int main()
{
	Table table_one(10); // created one object of type user defined "Table". 
	cout <<"Table one" <<endl;
	
	for(int i = 0 ; i < 10 ; i++)table_one.put(i,i);
	for(int i = 0 ; i < 10 ; i++) cout << table_one.get(i);
	
	cout << endl<<"Table two" <<endl;
	
	Table table_two(table_one); 
	Table table_three = table_one;
	Table table_four = foo();
//	for(int i = 0 ; i < 10 ; i++) cout << table_two.get(i);
	cout << endl;
	return 0;
}