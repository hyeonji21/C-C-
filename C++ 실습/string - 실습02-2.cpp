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

	cout << "이름과 전화번호를 입력해 주세요." << endl;

	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;

		person[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}

	cout << endl;

	string tempName;


	cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
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
		cout << "정보가 없습니다." << endl;
	}


	return 0;

}