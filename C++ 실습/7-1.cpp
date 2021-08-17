#include <iostream>
using namespace std;

class A {
public:
	int a;
};


int main(void){

	A ob;
	ob.a = 1;

	A* p = &ob;
	p->a = 2;

	cout << ob.a << endl;
	cout << p->a << endl;

	return 0;

}