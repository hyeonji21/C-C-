#include <iostream>
using namespace std;

int main() {

	char str[100];

	cout << "���ڿ��� �Է��ϼ��� : ";
	cin.getline(str, 100, '\n');

	int length = strlen(str);

	int check = 0;

	for (int i = 0; i < length; i++) {

		if (i == 0) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] -= 32;
			}
		}
		else if (str[i] == ' ') {
			check = 1;
		}
		else if (str[i] != ' ' && check) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] -= 32;
			}
			check = 0;
		}
	}

	cout << "���� �� ���ڿ� : ";
	cout << str;
	

	return 0;

}