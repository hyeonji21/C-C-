#include <iostream>
using namespace std;

int main() {

	int num = 0;

	cout << "�ʸ� �Է��ϼ���-> ";
	cin >> num;

	cout << num << " �ʴ� " << num / 3600 << "�ð� " << num % 3600 / 60 << "�� " << num % 3600 % 60 % 60 << "���̴�.";



	return 0;

}