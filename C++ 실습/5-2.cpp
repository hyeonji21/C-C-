#include <iostream>
#include <string>
using namespace std;

int main() {

	string str1 = "Are you happy? I am so happy.";
	string str2 = "Far across the distance and spaces between us";
	int str1Cnt = 0, str2Cnt = 0;

	int length1 = str1.length();
	int length2 = str2.length();

	int index = -1;

	while (true) {
		
		index = str1.find('a', index + 1);

		if (index == -1) {
			break;
		}

		str1Cnt += 1;

	}

	while (true) {
		
		index = str2.find('a', index + 1);

		if (index == -1) {
			break;
		}

		str2Cnt += 1;

	}
	
	cout << str1Cnt << endl;
	cout << str2Cnt << endl;


	return 0;

}