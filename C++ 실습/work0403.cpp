#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int address, char value);

};

Ram::Ram() {
	// for(È½¼ö), while(È½¼ö x)
	size = 1 * 100 * 1024;
	for (int i = 0; i < size; i++) {
		mem[i] = 0;
	}
}

Ram::~Ram() {
	cout << "¸Þ¸ð¸® Á¦°ÅµÊ" << endl;

}

void Ram::write(int address, char value) {
	mem[address] = value;
}

char Ram::read(int address) {
	return mem[address];
}



int main() {

	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);

	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 ¹øÁöÀÇ °ª = " << (int)ram.read(102) << endl;

	return 0;
}