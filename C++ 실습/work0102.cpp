#include <iostream>
using namespace std;

int main() {

	char ch;

	cout << "���ڸ� �Է��ϼ��� -> ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {  // �빮������ Ȯ��
		ch = ch + 32;
	}

	cout << "��� ��� => " << ch;
	

	return 0;

}