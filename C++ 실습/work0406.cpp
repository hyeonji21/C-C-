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
	int num;
	int count = 0;

	cout << "원의 개수 >> ";
	cin >> n;

	Circle* p = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> num;

		p[i].setRadius(num);

		if (AREA_TH < p[i].getArea()) {
			count++;
		}

	}

	cout << "면적이" << AREA_TH << "보다 큰 원은 " << count << "개 입니다.";

	delete[] p;

	return 0;

}