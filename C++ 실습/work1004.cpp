#include <iostream>
using namespace std;

class Stack {
	//int a[10];   // ������ ũ�⸦ ����
	int* p;      // ������ ũ�⸦ ����ڷκ��� ���޹��� ũ��� ����
	int size;
	int top;
public:

	Stack() {
		size = 10;
		top = 0;
		p = new int[size];
		for (int i = 0; i < size; i++) {
			p[i] = 0;
		}
	}

	/*
	Stack(const Stack& s) {

		size = s.size;
		p = new int[size];
		for(int i = 0; i < size; i++){
				p[i] = s.p[i];
		}
	}
	*/

	~Stack() {
		delete[] p;
	}

	Stack& operator<<(int op2) {
		if (top < size) {
			p[top] = op2;
			top++;
		}
		else {
			cout << "���� push �Ҽ� �����ϴ�." << endl;
		}
		return*this;
	}

	bool operator!() {
		if (this->top == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	int operator>>(int& op2) {
		top--;
		op2 = p[top];
		return p[top];
	}
};


int main() {

	// size �Է¹ް� �����Ҷ�
	//int nSize;
	//cin >> nSize;
	// Stack stack(nSize);

	Stack stack;

	stack << 3 << 5 << 10;  // Ŭ������ ����Լ� or �ܺ��Լ�(������ ����)
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}