#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	srand((unsigned)time(0));

	int num1 = rand() % 10 + 1;
	int num2 = rand() % (50 - 30 + 1) + 30;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	cout << num1 << "���� " << num2 << " ������ 3�� ����̰ų� 5�� ����� ���� : ";

	for (int i = num1; i <= num2; i++) {
		
		if ((i % 3 == 0 || i % 5 == 0)) {
			cout << i << " ";
		}

	}


	return 0;

}