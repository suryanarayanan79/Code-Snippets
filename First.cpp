#include <iostream>
#include <string.h>
using namespace std;

class shape
{
public:
	int id;
	void setid(int tempid);
	int getid();
	 void DrawShape()
	{
		cout << "Draw base shape";
	}
private:
	string color;
	void setcolor(string tempcolor);
	string getcolor();
};

class cube : public shape{
public :
	void DrawShape()
	{
		cout << "Draw cube shape";
	}
};
void ConstructBuilding( shape &cell){
cell.DrawShape();
}

// client programe
/*int main()
{
	cube comp;
	ConstructBuilding(comp);
	//comp.DrawShape();
	//comp.shape();
	//comp.s

	//comp.setid(12);
	return 1;
}*/