#include <iostream>
#include <string>
using namespace std;

int main() {

	//char str2[100];
	string str;

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;

	while (true) {

		cout << ">>";

		getline(cin, str);

		// cin.getline(cin, 100, '\n');

		if (str == "exit") {
			break;
		}

		// ���� ���

	

		int len = str.length();

		for (int i = len - 1; i >= 0; i--) {

			cout << str[i];

		}

		cout << endl;
	}


	return 0;

}

