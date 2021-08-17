#include <iostream>
using namespace std;

int main() {

	int num = 0;

	cout << "정수값을 입력하세요 -> ";
	cin >> num;

	if (num < 0) {
		num = -num;
	}

	cout << "절대값 => " << num;


	return 0;

}