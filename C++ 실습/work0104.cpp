#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "1000 ~ 9999 ������ ������ �Է��ϼ���-> ";
	cin >> num;

	cout << "������ : " << num << endl;

	cout << "õ�� �ڸ� : " << num / 1000 << endl;
	cout << "���� �ڸ� : " << num % 1000 / 100 << endl;
	cout << "���� �ڸ� : " << num % 1000 % 100 / 10 << endl;
	cout << "���� �ڸ� : " << num % 1000 % 100 % 10 << endl;

	return 0;

}