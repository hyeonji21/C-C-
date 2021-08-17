#include <iostream>
using namespace std;

void find_max(int arr[], int* max) {

	for (int i = 0; i < 5; i++) {

		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}

int main() {

	int arr[5] = {};
	int num = 0;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 정수 입력 : ";
		cin >> num;
		arr[i] = num;
	}

	int max = arr[0];

	cout << "입력된 정수 값  : ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	
	find_max(arr, &max);

	cout << endl;

	cout << "가장 큰 값은 : " << max;



	return 0;

}