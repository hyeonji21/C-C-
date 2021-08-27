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
		// radius = r;  사용 x : 왜? radius가 private 상태로 상속되었기 때문에
		// setRadius(r); 사용o : 왜? setRadius가 public 상태로 상속되었기 때문에
		name = n;
	}
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}
};



int main() {

	NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
	waffle.show();


	return 0;
}
