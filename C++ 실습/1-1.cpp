#include <iostream>
using namespace std;

int main() {

	int num = 0;

	cout << "�������� �Է��ϼ��� -> ";
	cin >> num;

	if (num < 0) {
		num = -num;
	}

	cout << "���밪 => " << num;


	return 0;

}