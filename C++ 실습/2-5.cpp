#include <iostream>
using namespace std;

void gogodan(int dan) {

	for (int i = 1; i <= 9; i++) {

		cout << dan << " * " << i << " = " << dan * i << endl;
	}

}

int main() {

	int dan;
	cout << "원하는 단을 입력하세요 : ";
	cin >> dan;
	gogodan(dan);

	return 0;

}