# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767) {
		int num = rand() % (max - min + 1) + min;
		return num;
	}
	static char netAlphabet() {
		int num2 = rand() % 2;

		if (num2 == 0) {
			num2 = rand() % (90 - 65 + 1) + 65;
			return num2;
		}
		else {
			num2 = rand() % (122 - 97 + 1) + 97;
			return num2;
		}
	}
	static double nextDouble() {
		double num3 = rand() / (double)(RAND_MAX + 1);
		return num3;
	}
};

int main() {

	Random::seed();

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;

	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::netAlphabet() << ' ';
	}
	cout << endl;

	cout << "랜덤한 실수를 10개 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
	}

	return 0;
}


