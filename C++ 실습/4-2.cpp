#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

void Circle::setCircle(string name, int radius) {

	this->radius = radius;
	this->name = name;

}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

string Circle::getName() {
	return name;
}


class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();

};

CircleManager::CircleManager(int size) {


	p = new Circle[size];
	this->size = size;

	string name;
	int radius;
	
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}

}

CircleManager::~CircleManager() {

	delete[] p;

}

void CircleManager::searchByName() {

	string name;

	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if ((p[i].getName()) == name) {
			cout << name << "�� ������ " << p[i].getArea() << endl;
		}
	}


}

void CircleManager::searchByArea() {

	int area = 0;

	cout << "�ּ� ������ ������ �Է��ϼ��� >>";
	cin >> area;

	cout << "10���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) {
		if ((p[i].getArea()) > 10) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
		}
	}

}


int main() {

	int n = 0;

	cout << "���� ���� >> ";
	cin >> n;

	CircleManager circlemanager(n);
	circlemanager.searchByName();
	circlemanager.searchByArea();



	return 0;

}