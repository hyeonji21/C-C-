#include <iostream>

using namespace std;

class Add {
private:
	int a, b;

public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a + b;
	}
};
class Sub {
private:
	int a, b;

public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
private:
	int a, b;

public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
private:
	int a, b;

public:
	void setValue(int x, int y) {
		a = x; b = y;
	}
	int calculate() {
		return a / b;
	}
};

int flag = 0;

int main() {
	
	int a, b;
	char op;
	int reVar = 0;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> a >> b >> op;

		switch (op) {
		case '+':
			Add addVar;
			addVar.setValue(a, b);
			reVar = addVar.calculate();
			break;

		case '-':
			Sub subVar;
			subVar.setValue(a, b);
			reVar = subVar.calculate();
			break;
		case '*':
			Mul mulVar;
			mulVar.setValue(a, b);
			reVar = mulVar.calculate();
			break;
		case '/':
			Div divVar;
			divVar.setValue(a, b);
			if (b == 0) {
				flag = 1;
			}
			else {
				reVar = divVar.calculate();
			}
			break;
		}

		if (flag == 0)
			cout << reVar << endl;
		else
			cout << "연산불가" << endl;

		flag = 0;
	}

	return 0;

}