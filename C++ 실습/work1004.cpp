#include <iostream>
using namespace std;

class Stack {
	//int a[10];   // 스택의 크기를 고정
	int* p;      // 스택의 크기를 사용자로부터 전달받은 크기로 지정
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
			cout << "값을 push 할수 없습니다." << endl;
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

	// size 입력받고 구현할때
	//int nSize;
	//cin >> nSize;
	// Stack stack(nSize);

	Stack stack;

	stack << 3 << 5 << 10;  // 클래스의 멤버함수 or 외부함수(프렌드 설정)
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}