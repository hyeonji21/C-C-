#include <iostream>
#include <string>
using namespace std;

int main() {

	string str1 = "Are you happy? I am so happy.";
	string str2 = "Far across the distance and spaces between us ";
	int str1Cnt = 0, str2Cnt = 0;

	int length1 = str1.length();
	int length2 = str2.length();


	for (int i = 0; i < length1; i++) {
		if (str1.at(i) == 'a') {
			str1Cnt += 1;
		}
	}

	for (int i = 0; i < length2; i++) {
		if (str2.at(i) == 'a') {
			str2Cnt += 1;
		}
	}


	cout << str1Cnt << endl;
	cout << str2Cnt << endl;

	return 0;

}