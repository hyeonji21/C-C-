#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;

public:
	NamedCircle(int r, string n) : Circle(r){
		// radius = r;  ��� x : ��? radius�� private ���·� ��ӵǾ��� ������
		// setRadius(r); ���o : ��? setRadius�� public ���·� ��ӵǾ��� ������
		name = n;
	}
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
};



int main() {

	NamedCircle waffle(3, "waffle"); // �������� 3�̰� �̸��� waffle�� ��
	waffle.show();


	return 0;
}
