#include <iostream>
using namespace std;

int main() {

	char ch;

	cout << "문자를 입력하세요 -> ";
	cin >> ch;

	cout << "출력 결과 => ";

	if (ch >= 'A' && ch <= 'Z') {
		ch += 32;
		cout << ch;
	}
	else {
		cout << ch;
	}

	return 0;

}