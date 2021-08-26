#include <iostream>
using namespace std;

int big(int x, int y, int z = 100) {

	if (x > y) {
		if (x < z) {
			return x;
		}
		else {
			return z;
		}
	}
	else {
		if (y < z) {
			return y;
		}
		else {
			return z;
		}
	}
}


int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}