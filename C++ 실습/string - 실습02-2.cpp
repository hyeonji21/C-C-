#include <iostream>
#include <string>
using namespace std;


class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel;  }
	void set(string name, string tel);
};
 
Person::Person() {

}

void Person::set(string name, string tel) {

	this->name = name;
	this->tel = tel;

}


int main() {

	Person person[3];

	string name, tel;

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���." << endl;

	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;

		person[i].set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}

	cout << endl;

	string tempName;


	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
	cin >> tempName;

	int flag = 0;

	for (int i = 0; i < 3; i++) {
		if (person[i].getName() == tempName) {
			cout << person[i].getTel() << endl;
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "������ �����ϴ�." << endl;
	}


	return 0;

}