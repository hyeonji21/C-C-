#include <iostream>
using namespace std;

int main() {

	int i, j = 0;
	int k = 0;

	int arr[5][5] = {};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			k = k + 1;
			arr[i][j] = k;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 0) {
				cout << " ";
			}
			else {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}


	return 0;

}