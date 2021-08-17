#include <iostream>
using namespace std;

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
	double area = 0.0;
	area = radius * radius * 3.14;

	return area;
}


int main(void) {

	Circle circle[3];
	int r;
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;

		circle[i].setRadius(r);

		if (circle[i].getArea() >= 100) {
			cnt++;
		}

	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
	
	return 0;
}