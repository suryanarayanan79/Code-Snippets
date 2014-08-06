#include <iostream>
using namespace std;

class Sample{
	static int ObjectCount ;
	int* p;
public:


Sample(){
ObjectCount++;
p = new int[10];
cout <<"Object Count Constr" <<ObjectCount << '\n';

//cout << "p address" << p;
}
Sample(Sample& temp){
	p = new int[10];
	ObjectCount++;
	cout <<"Object Count Copy Const" <<ObjectCount << '\n';
}
	~Sample(){
		ObjectCount--;
		cout <<"Object Count desT" <<ObjectCount << '\n';
		delete [] p;
	}
};

int Sample::ObjectCount = 0;

int main(){
Sample a;
//Sample b;
Sample c = a; // Shallow copy or bitwise copy . both the copy points to the same address location.
//Hence the memory location is free twice.
//Sample d; 
//d = b;
return 0;
}