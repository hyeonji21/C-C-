#include <iostream>
using namespace std;

class Tower {

	int height;   // 멤버 변수

public:

	Tower() {       // 멤버 함수 : 생성자
		height = 1;
	}
	Tower(int h) {   // 멤버 함수 : 생성자
		height = h;
	}
	
	int getHeight() {
		return height;
	}

};


int main() {

	Tower myTower; // 1미터
	Tower seoulTower(100);  // 100미터
	 
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;


	return 0;

}