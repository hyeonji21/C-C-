#include <iostream>
using namespace std;

int calculator(int a, int b, char op) {

	int result = 0;

	if (op == '+') {
		result = a + b;
	}
	else if (op == '-') {
		result = a - b;
	}
	else if (op == '*') {
		result = a * b;
	}
	else {
		result = a / b;
	}

	return result;

}

int main() {

	int a, b, c;
	char op;

	cout << "�� ������ +,-,*,/�� �ϳ��� �����ڸ� �Է��ϼ���(3+5) -> ";
	cin >> a >> op >> b;
	c = calculator(a, b, op);

	cout << c;
	

	return 0;

}