#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "1000 ~ 9999 사이의 정수를 입력하세요-> ";
	cin >> num;

	cout << "정수값 : " << num << endl;

	cout << "천의 자리 : " << num / 1000 << endl;
	cout << "백의 자리 : " << num % 1000 / 100 << endl;
	cout << "십의 자리 : " << num % 1000 % 100 / 10 << endl;
	cout << "일의 자리 : " << num % 1000 % 100 % 10 << endl;

	return 0;

}