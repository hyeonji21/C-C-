#include <iostream>
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	Book(Book &b);
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) {
	
	this->price = price;

	int length = strlen(title);
	this-> title = new char[length + 1];
	strcpy(this->title, title);

}

Book::~Book() {
	if (title) {
		delete title;
	}
}

void Book::set(const char* title, int price) {

	if (this->title) {
		delete this->title;
	}

	this->price = price;
	int length = strlen(title);
	this-> title = new char[length + 1];
	strcpy(this->title, title);

}

Book::Book(Book &b) {

	this->price = b.price;

	int length = strlen(b.title);
	this->title = new char[length + 1];
	strcpy(this->title, b.title);

}


int main() {

	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();


	return 0;

}