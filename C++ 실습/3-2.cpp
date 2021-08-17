#include <iostream>
using namespace std;

int F(int num) {

	if (num == 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}
	else {
		return (F(num - 1) + F(num - 2));

	}
}


int main() {

	for (int i = 0; i < 15; i++) {
		cout << F(i) << '\t';

		if ((i == 4) || (i == 9)) {
			cout << endl;
		}
	}

	return 0;

}