#include <iostream>
using namespace std;

class Tower {

	int height;   // ��� ����

public:

	Tower() {       // ��� �Լ� : ������
		height = 1;
	}
	Tower(int h) {   // ��� �Լ� : ������
		height = h;
	}
	
	int getHeight() {
		return height;
	}

};


int main() {

	Tower myTower; // 1����
	Tower seoulTower(100);  // 100����
	 
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;


	return 0;

}