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
		radius = 1;        // ������
		name = "Circle0";
	}

	Circle(int r) {     // ������
		radius = r;
		name = "Circle" + to_string(cnt);
		cout << "������ ȣ�� : " << name << endl;
		cnt++;
	}

	Circle(Circle &c) {   // ���� ������

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
	Circle c2 = c1;  // �ʱ�ȭ

	Circle c3;
	c3 = c1;   // �Ϲ� ����



	cout << c1.getRadius() << endl;
	*/

	f();

	return 0;

}