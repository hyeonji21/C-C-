#include <iostream>

using namespace std;

#define AREA_TH 100 // ��ȣ���
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

	cout << "���� ���� >> ";
	cin >> n;

	Circle* p = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> num;

		p[i].setRadius(num);

		if (AREA_TH < p[i].getArea()) {
			count++;
		}

	}

	cout << "������" << AREA_TH << "���� ū ���� " << count << "�� �Դϴ�.";

	delete[] p;

	return 0;

}