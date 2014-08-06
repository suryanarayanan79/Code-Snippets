#include <iostream>
using namespace std;
class Matrix{

public:
		int Mat[3][3];//RC

	Matrix(){
		for(int r = 0 ; r < 3; r++){
			for(int c = 0; c < 3; c++){
				Mat[r][c] = 0;
			}
			cout << endl;
		}	
		cout << "Constr called" << endl;
	}

	void InitMatrix(){
		for(int r = 0 ; r < 3; r++){
			for(int c = 0; c < 3; c++){
				Mat[r][c] = r+c;
			}
			cout << endl;
		}
	}

	void Display(){
		for(int i = 0 ; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cout << Mat[i][j] << ",";
			}
			cout << endl;
		}
	}

	void AddMatrix(Matrix& second){
		for(int r = 0 ; r < 3; r++){
			for(int c = 0; c < 3; c++){
				Mat[r][c] += second.Mat[r][c];
			}
		}
	}
	//pls refer wiki pedi for the mathematical formula.
	//http://en.wikipedia.org/wiki/Matrix_multiplication
		void MultiplyMatrix (Matrix& first, Matrix& second){
		for(int r = 0 ; r < 3; r++){
			for(int c = 0; c < 3; c++){
				for(int k = 0; k < 3; k++){
					Mat[r][c] += (first.Mat[r][k] * second.Mat[k][c]);
				}
			}
		}
	}
};

int main(){
	Matrix& M1 = Matrix();
	M1.InitMatrix();

	Matrix& M2 = Matrix();
	M2.InitMatrix();
	Matrix& M3 = Matrix();
	M3.MultiplyMatrix(M1,M2);
	//M1.AddMatrix(M2);
	M3.Display();
	return 0;

}
