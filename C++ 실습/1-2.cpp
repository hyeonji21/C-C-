#include <iostream>
using namespace std;

int main() {

	char ch;

	cout << "���ڸ� �Է��ϼ��� -> ";
	cin >> ch;

	cout << "��� ��� => ";

	if (ch >= 'A' && ch <= 'Z') {
		ch += 32;
		cout << ch;
	}
	else {
		cout << ch;
	}

	return 0;

}