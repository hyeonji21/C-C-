#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string msg;
public:
	Histogram(string str) {
		msg = str;
	}

	void put(string str) {
		msg = msg + str;
	}

	void putc(char c) {
		msg = msg + c;
	}

	void print() {
		cout << msg << endl << endl; 

		cout << " ÃÑ ¾ËÆÄºª ¼ö : " << msg.length() << endl << endl;

		for (int i = 0; i < msg.length(); i++) {
			msg[i] = tolower(msg[i]); 
		}

		for (int i = 'a'; i <= 'z'; i++) {

			int cnt = 0;

			for (int j = 0; j < msg.length(); j++) {
				if (msg[j] == (char)i) {

					cnt++;

				}
			}

			cout << (char)i << " (" << cnt << ") : ";
			 
			for (int r = 0; r < cnt; r++) {
				cout << "*";
			}

			cout << endl;

		}
	}
};

int main() {

	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;

}