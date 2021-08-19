#include <iostream>
using namespace std;

int main(void) {

	cout << "정상가격	세일가격" << endl;
	cout << "------------------------" << endl;

	int i;

	for (int i = 10000; i <= 20000; i += 1000) {

		cout << i << "		 " << i - (i * 0.3) << endl;

	}



	return 0;

}