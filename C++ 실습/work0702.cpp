#include <iostream>
using namespace std;

int big(int a, int b, int size = 100) {

	if (a > b) {
		if (a > size) {
			return size;
		}
		else {
			return a;
		}
	}
	else {
		if (b > size) {
			return size;
		}
		else {
			return b;
		}
	}

}

int main() {

	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;


	return 0;

}