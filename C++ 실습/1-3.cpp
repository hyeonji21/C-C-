#include <iostream>
using namespace std;

int main() {

	int num = 0;

	cout << "초를 입력하세요-> ";
	cin >> num;

	cout << num << " 초는 " << num / 3600 << "시간 " << num % 3600 / 60 << "분 " << num % 3600 % 60 % 60 << "초이다.";



	return 0;

}