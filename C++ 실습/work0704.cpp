#include <iostream>
using namespace std;

class ArrayUtility2 {

public:
	static int* concat(int s1[], int s2[], int size) {

		int* p = new int[size * 2];
		for (int i = 0; i < size; i++) {
			p[i] = s1[i];
		}
		for (int i = 0; i < size; i++) {
			p[i + size] = s2[i];
		}

		return p;
	}

	static int* remove(int s1[], int s2[], int sizeS1, int sizeS2, int& retSize) {
		
		int* s1_1 = new int[sizeS1];

		for (int i = 0; i < sizeS1; i++) {
			s1_1[i] = true;
		}

		retSize = sizeS1;
		for (int i = 0; i < sizeS1; i++) {
			for (int j = 0; j < sizeS2; j++) {
				if (s1[i] == s2[j]) {
					s1_1[i] = false;
					retSize--;
				}
			}
		}

		if (retSize == 0) {
			return NULL;
		}

		int* p2 = new int[retSize];

		int check = 0;
		for (int i = 0; i < sizeS1; i++) {
			if (s1_1[i] == true) {
				p2[check] = s1[i];
				check++;
			}
		}

		delete[] s1_1;

		return p2;
	}
};

int main() {

	ArrayUtility2 array;

	int a[5];
	int b[5];

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
	}

	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;

	int* p = array.concat(a, b, 5);
	for (int i = 0; i < 10; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;

	int retSize = 0;

	int* p2 = array.remove(a, b, 5, 5, retSize);

	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;

	if (p2 == NULL) {
		cout << "�迭 x[]�� y[]�� �����ϴ�." << endl;
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
