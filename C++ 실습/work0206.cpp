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
	cout << "�ݺ��� ���ڸ� �Է��ϼ��� -> ";
	cin >> ch;
	cout << "�ݺ��� Ƚ���� �Է��ϼ��� -> ";
	cin >> n;
	charPrn(ch, n);

}
