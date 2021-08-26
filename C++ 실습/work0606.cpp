#include <iostream>
using namespace std;

class ArrayUtility2 {

public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size1, int size2, int& retSize);

};
int* ArrayUtility2::concat(int s1[], int s2[], int size) {

	int* mem = new int[size * 2];
	for (int i = 0; i < size; i++) {
		mem[i] = s1[i];
	}
	for (int i = 0; i < size; i++) {
		mem[i + size] = s2[i];
	}

	return mem;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size1, int size2, int& retSize) {

	int* p = new int[size1];

	for (int i = 0; i < size1; i++) {
		p[i] = true;
	}
	retSize = size1;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (s1[i] == s2[j]) {
				p[i] = false;
				retSize--;
			}
		}
	}

	if (retSize == 0) {
		return NULL;
	}

	int* p2 = new int[retSize];

	int check = 0;
	for (int i = 0; i < size1; i++) {
		if (p[i] == true) {
			p2[check] = s1[i];
			check++;
		}
	}

	delete[] p;

	return p2;
}

int main() {

	ArrayUtility2 arrayutility;

	int x[5];
	int y[5];

	cout << "정수 5 개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수 5 개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다" << endl;
	int* p = arrayutility.concat(x, y, 5);
	for (int i = 0; i < 10; i++) {
		cout << p[i] << ' ';
	}

	cout << endl;

	int retSize = 0;
	int* p2 = arrayutility.remove(x, y, 5, 5, retSize);

	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 "<< retSize << endl;

	if (p2 == NULL) {
		cout << "배열 x[]와 y[]는 같습니다." << endl;
	}
	else {
		for (int i = 0; i < retSize; i++) {
			cout << p2[i] << ' ';
		}
	}

	delete[] p;
	delete[] p2;



	return 0;
}