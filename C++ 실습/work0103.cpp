#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "�ʸ� �Է��ϼ���-> ";
	cin >> num;

	int hour, minute, second;

	hour = num / 3600;
	minute = num % 3600 / 60;
	second = num % 3600 % 60;

	cout << num << " �ʴ� " << hour << "�ð� " << minute << "�� " << second << "���̴�.";


	return 0;

}