#include <iostream>
using namespace std;

int main() {

	cout << "���󰡰�" << '\t' << "���ϰ���" << '\t' << endl;

	cout << "-------------------------------------------" << endl;


	int num = 10000;





	for (int i = 0; i < 11; i++) {
		
		cout << num << '\t' << '\t' << num - (num * 0.3) << '\t';

		num += 1000;

		cout << endl;
	}


	return 0;

}