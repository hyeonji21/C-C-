#include <iostream>
using namespace std;

void gogodan(int dan) {

	for (int i = 1; i <= 9; i++) {

		cout << dan << " * " << i << " = " << dan * i << endl;
	}

}

int main() {

	int dan;
	cout << "���ϴ� ���� �Է��ϼ��� : ";
	cin >> dan;
	gogodan(dan);

	return 0;

}