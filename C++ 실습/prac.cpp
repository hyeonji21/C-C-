#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	
	string note;
	char n;

	while (true) {

		srand((unsigned)time(0));

		cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
		cout << ">> ";

		if (note == "exit") {
			break;
		}


		getline(cin, note, '\n');

		for (;;) {
			int length = note.length();

			int index = rand() % length;

			if ((note[index] >= 97) && (note[index] <= 122)) {
				n = rand() % (122 - 97 + 1) + 97;
			}
			else {
				n = rand() % (90 - 65 + 1) + 65;
			}

			if ((note.at(index) == '.') || (note.at(index) == ' ') || (note[index] = n)) {
				continue;
			}
			else {
				note[index] = n;
				break;
			}
		}
		cout << note << endl;
	}



	return 0;
}