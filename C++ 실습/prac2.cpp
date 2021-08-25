#include <iostream>
#include <string>
using namespace std;

#define PI 3.141592
int cnt = 1;

class Circle {
	int radius;
	string name;

public:
	Circle() {
		radius = 1;        // 생성자
		name = "Circle0";
	}

	Circle(int r) {     // 생성자
		radius = r;
		name = "Circle" + to_string(cnt);
		cout << "생성자 호출 : " << name << endl;
		cnt++;
	}

	Circle(Circle &c) {   // 복사 생성자

		this->radius = c.radius;
		this->name = c.name;
	}

	double getRadius() {
		return radius * radius * PI;
	}

	~Circle() {
		cout << "1111" << endl;
	}

};



Circle f() {

	Circle tmp;

	return tmp;

}




int main() {

	/*
	Circle c1 = 30;     // Circle c1(30);
	//Circle c2 = 20;
	Circle c2 = c1;  // 초기화

	Circle c3;
	c3 = c1;   // 일반 대입



	cout << c1.getRadius() << endl;
	*/

	f();

	return 0;

}