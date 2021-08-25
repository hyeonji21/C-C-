#include <iostream>
#include <string>

using namespace std;

class SortedArray {
	int arr[100];
public:
	SortedArray(int x1 = 0, int x2 = 0, int x3 = 0) {
		arr[0] = x1;
		arr[1] = x2;
		arr[2] = x3;
	}

	SortedArray operator+(SortedArray op2) {
		SortedArray tmp;

		tmp.arr[0] = this->arr[0];
		tmp.arr[1] = op2.arr[0];

		tmp.arr[2] = this->arr[1];
		tmp.arr[3] = op2.arr[1];

		tmp.arr[4] = this->arr[2];
		tmp.arr[5] = op2.arr[2];

		return tmp;
	}

};

int main() {

	SortedArray a(2, 5, 9), b(3, 7, 10), c;
	c = a + b;  // c = {2,3,5,7,9,10}. 정렬된 두 배열을 결합한(merge) 새로운 배열 생성

	return 0;
}