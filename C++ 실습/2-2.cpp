#include <iostream>
using namespace std;

int main() {

	cout << "정상가격" << '\t' << "세일가격" << '\t' << endl;

	cout << "-------------------------------------------" << endl;


	int num = 10000;





	for (int i = 0; i < 11; i++) {
		
		cout << num << '\t' << '\t' << num - (num * 0.3) << '\t';

		num += 1000;

		cout << endl;
	}


	return 0;

}