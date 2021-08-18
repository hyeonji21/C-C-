#include <iostream>
#include <string>

using namespace std;



int main() {

	string* p = new string("c++");

	cout << p << endl;

	delete p;



	return 0;
}