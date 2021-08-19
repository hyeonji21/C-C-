#include <iostream>
using namespace std;

int main() {

	// 숫자를 입력 받아 그 수의 절대값을 구하는 
	// 프로그램을 작성하시오. 

	// 첫번째 줄에 "정수값을 입력하세요 ->" 문자열 정보를 출력

	int num;

	cout << "정수값을 입력하세요 -> ";
	cin >> num;

	cout << "절대값 => ";

	// 절대값 연산
	// 입력된 값이 0이면 0출력       ==> 그대로 사용
	// 입력된 값이 양수이면 양수 출력 ==> 그대로 사용

	// 입력된 값이 음수이면 음수 출력 ==> 부호를 변경


	if (num < 0) {
		num = num * -1;  // 부호를 변경하는 문장
		//num = -num;
	}
	
	cout << num;


	return 0;
}