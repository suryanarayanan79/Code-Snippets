#include <iostream>

template <class T>
int sizeOfT(T x = 0){
    return (char *)(&x + 1) - (char *)&x;
}

int main(){
	printf("Surya");
	double a = 0;

	std::cout << sizeOfT(a);
return 0;

}
