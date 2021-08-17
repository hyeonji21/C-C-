#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}

	void read();
	void write();
	int big();
	~Sample();

};

void Sample::read() {

	int num = 0;

	for (int i = 0; i < size; i++) {
		cin >> num;
		p[i] = num;
	}
	cout << endl;

}

void Sample::write() {

	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big() {

	int max = p[0];
	for (int i = 0; i < size; i++) {
		if (max < p[i]) {
			max = p[i];
		}
	}

	return max;

}

Sample::~Sample() {

	delete[] p;

}

int main() {

	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;


	return 0;

}