#include <iostream>
#include <string>
using namespace std;

int main() {

	//char str2[100];
	string str;

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;

	while (true) {

		cout << ">>";

		getline(cin, str);

		// cin.getline(cin, 100, '\n');

		if (str == "exit") {
			break;
		}

		// 역순 출력

	

		int len = str.length();

		for (int i = len - 1; i >= 0; i--) {

			cout << str[i];

		}

		cout << endl;
	}


	return 0;

}

