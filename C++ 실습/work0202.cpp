#include <iostream>
using namespace std;

int main(void) {

	cout << "���󰡰�	���ϰ���" << endl;
	cout << "------------------------" << endl;

	int i;

	for (int i = 10000; i <= 20000; i += 1000) {

		cout << i << "		 " << i - (i * 0.3) << endl;

	}



	return 0;

}