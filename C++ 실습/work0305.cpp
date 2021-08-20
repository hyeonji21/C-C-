#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string.h>

using namespace std;

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(const char days[10]) {
		char tmpStr[100];
		strcpy(tmpStr, days);

		char* tok1 = strtok(tmpStr, "/");

		int count = 0; // while 문이 몇 번 반복됬는지 확인용

		while (tok1 != NULL) {
			if (count == 0) {
				year = atoi(tok1);
			}
			else if (count == 1) {
				month = atoi(tok1);
			}
			else if (count == 2) {
				day = atoi(tok1);
			}

			count += 1;
			tok1 = strtok(NULL, "/");
		}
		
	}

	void show();

	int getYear() {
		return year;
	}
	int getMonth();
	int getDay() {
		return day;
	}

};

void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int Date::getMonth() {
	return month;
}


int main() {

	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일


	independenceDay.show();

	cout << birth.getYear() << ','
		<< birth.getMonth() << ','
		<< birth.getDay() << endl;




	return 0;
}