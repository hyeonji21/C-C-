#include <iostream>
using namespace std;

int main(void) {

	int result = 1;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				result = 1;
			}
			else {
				result *= j;
			}
		}
		cout << i << "! = " << result << endl;
	}

	return 0;

}