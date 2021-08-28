# include <iostream>
using namespace std;

class Statistics {

	int* p;
	int check = 0;

public:

	Statistics() {
		p = new int[10];
	}

	~Statistics() {
		delete[] p;
	}

	bool operator!() {
		if (check == 0) {
			return true;
		}
		return false;
	}

	Statistics& operator<< (int num) {

		p[check] = num;
		check++;

		return*this;
	}

	Statistics& operator>>(double& avg) {

		double sum = 0;
		for (int i = 0; i < check; i++) {
			sum += p[i];
		}
		avg = sum / check;

		return*this;
	}

	void operator~() {

		for (int i = 0; i < check; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}

};

int main() {

	Statistics stat;

	if (!stat)
		cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++) {
		stat << x[i];
	}
	stat << 100 << 200;

	~stat;

	double avg;
	stat >> avg;
	cout << "avg = " << avg << endl;


	return 0;
}