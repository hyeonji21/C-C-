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
		cout << i + 1 << "��° ���� �Է� : ";
		cin >> num;
		arr[i] = num;
	}

	int max = arr[0];

	cout << "�Էµ� ���� ��  : ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	
	find_max(arr, &max);

	cout << endl;

	cout << "���� ū ���� : " << max;



	return 0;

}