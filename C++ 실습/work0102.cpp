#include <iostream>
using namespace std;

int main() {

	char ch;

	cout << "문자를 입력하세요 -> ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {  // 대문자인지 확인
		ch = ch + 32;
	}

	cout << "출력 결과 => " << ch;
	

	return 0;

}