#include <iostream>
using namespace std;

void charPrn(char ch, int n) {

	for (int i = 0; i < n; i++) {
		cout << ch;
	}

}


int main() {

	char ch;
	int n;
	cout << "�ݺ��� ���ڸ� �Է��ϼ��� -> ";
	cin >> ch;
	cout << "�ݺ��� Ƚ���� �Է��ϼ��� -> ";
	cin >> n;
	charPrn(ch, n);


	return 0;

}