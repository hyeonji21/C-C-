#include <iostream>
using namespace std;

void reverseString(char* s1, char* s2) {

	int length = strlen(s1);

	for (int i = 0; i < length; i++) {

		s2[i] = s1[length - 1 - i];

	}

	s2[length] = '\0';

}



int main() {

	char str[100];
	char reverse_str[100];
	cout << "input string : ";
	cin.getline(str, 100, '\n');
	reverseString(str, reverse_str);
	cout << "reverse string : ";
	cout << reverse_str << endl;

	return 0;

}