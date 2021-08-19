#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "초를 입력하세요-> ";
	cin >> num;

	int hour, minute, second;

	hour = num / 3600;
	minute = num % 3600 / 60;
	second = num % 3600 % 60;

	cout << num << " 초는 " << hour << "시간 " << minute << "분 " << second << "초이다.";


	return 0;

}