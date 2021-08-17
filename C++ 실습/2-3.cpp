#include <iostream>
using namespace std;

int main() {

	int k = 1;

	for (int i = 1; i <= 10; i++) {
		cout << i << "! = ";

		for (int j = 1; j <= i; j++) {
			k *= j;
		}

		cout << k << endl;
		k = 1;

	}

	return 0;

}