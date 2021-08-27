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

	NamedCircle(int r = 1, string n = " ") : Circle(r) {
		// radius = r;  ��� x : ��? radius�� private ���·� ��ӵǾ��� ������
		// setRadius(r); ���o : ��? setRadius�� public ���·� ��ӵǾ��� ������
		name = n;
	}
	void show() {
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

int main() {

	NamedCircle pizza[5];

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;

	int inputRadius;
	string inputName;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> inputRadius >> inputName;
		
		pizza[i].setRadius(inputRadius);
		pizza[i].setName(inputName);
	}

	NamedCircle* p = pizza;
	
	for (int i = 1; i < 5; i++) {
		if (p->getRadius() < pizza[i].getRadius()) {
			p = &pizza[i];
		}
	}

	cout << "���� ������ ū ���ڴ� ";
	cout << p->getName();
	cout << "�Դϴ�.";


	return 0;
}
