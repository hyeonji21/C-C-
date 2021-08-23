#include <iostream>

using namespace std;

#define AREA_TH 100 // 기호상수
#define PI 3.141592

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {

	this->radius = radius;

}

double Circle::getArea() {

	return radius * radius * PI;
	
}


int main() {

	int n;
	int count = 0;

	Circle* p = new Circle[3];

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> n;

		p[i].setRadius(n);

		if (AREA_TH < p[i].getArea()) {
			count++;
		}

	}

	cout << "면적이" << AREA_TH << "보다 큰 원은 " << count << "개 입니다.";

	delete[] p;

	return 0;

}