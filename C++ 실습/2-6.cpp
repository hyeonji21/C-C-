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
	cout << "반복할 문자를 입력하세요 -> ";
	cin >> ch;
	cout << "반복할 횟수를 입력하세요 -> ";
	cin >> n;
	charPrn(ch, n);


	return 0;

}