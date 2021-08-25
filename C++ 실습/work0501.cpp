#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = " ", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "��" << pages << "������" << endl;

	}
	string getTitle() { return title; }
	
	void operator+= (int x);
	void operator-= (int x);

	//friend void operator+=(Book &op1, int op2);
	//friend void operator-= (Book& op1, int op2);
};

void Book::operator+=(int x) {
	this->price = this->price + x;
}

void Book::operator-= (int x) {
	this->price = this->price - x;
}

//void operator+= (Book &op1, int op2) {
//	op1.price = op1.price + op2;
//}
//
//void operator-= (Book& op1, int op2) {
//	op1.price = op1.price - op2;
//}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();

}