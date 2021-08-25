#include <iostream>
using namespace std;

class Matrix {

	int arr[4];

public:
	Matrix(int x1 = 0, int x2 = 0, int x3 = 0, int x4 = 0) {
		arr[0] = x1;
		arr[1] = x2;
		arr[2] = x3;
		arr[4] = x4;
	}





};


int main() {

	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;

	c = a + b;


	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;


	return 0;

}