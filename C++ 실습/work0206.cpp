#include <iostream>
using namespace std;

void charPrn(char ch, int n) {

	int i = 0;

	while (i < n) {

		cout << ch;

		i++;
	}
}


void main()
{
	char ch;
	int n;
	cout << "반복할 문자를 입력하세요 -> ";
	cin >> ch;
	cout << "반복할 횟수를 입력하세요 -> ";
	cin >> n;
	charPrn(ch, n);

}
