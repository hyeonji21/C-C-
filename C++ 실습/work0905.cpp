#include<iostream>
using namespace std;

class LoopAdder { // �߻� Ŭ���� 
    string name; // ������ �̸� 
    int x, y, sum; // x���� y������ ���� sum 
    void read(); // x, y ���� �о� ���̴� �Լ� 
    void write(); // sum�� ����ϴ� �Լ� 
protected:
    LoopAdder(string name = "") { // ������ �̸��� �޴´�. �ʱ갪�� "" 
        this->name = name;
    }
    int getX() { return x; }
    int getY() { return y; }
    virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���� ���� ���ϴ� �Լ� 
public:
    void run(); // ������ �����ϴ� �Լ� 
};

void LoopAdder::read() { // x, y �Է� 
    cout << name << ":" << endl;
    cout << "ó�� ������ �ι�° ������ ���Ѵ�. �� ���� �Է��ϼ��� >> ";
    cin >> x >> y;
}

void LoopAdder::write() { // ��� sum ��� 
    cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
}

void LoopAdder::run() {
    read(); // x, y�� �д´� 
    sum = calculate(); // ������ ���鼭 ����Ѵ�. 
    write(); // ��� sum�� ����Ѵ�. 
}

class WhileLoopAdder : public LoopAdder {
    string wloop;
public:
    WhileLoopAdder(string wloop) : LoopAdder(wloop) {
        this->wloop = wloop;
    }
    virtual int calculate() {
        int tmp_sum = 0;
        int tmp_x = getX();
        int tmp_y = getY();
        while (tmp_x <= tmp_y) {
            tmp_sum += tmp_x;
            tmp_x++;
        }
        return tmp_sum;
    }
};

class DoWhileLoopAdder : public LoopAdder {
    string dwloop;
public:
    DoWhileLoopAdder(string dwloop) : LoopAdder(dwloop) {
        this->dwloop = dwloop;
    }
    virtual int calculate() {
        int tmp_sum = 0;
        int tmp_x = getX();
        int tmp_y = getY();
        do {
            tmp_sum += tmp_x;
            tmp_x++;
        } while (tmp_x <= tmp_y);
        return tmp_sum;
    }
};

int main() {
    WhileLoopAdder whileLoop("While Loop");
    DoWhileLoopAdder doWhileLoop("Do While Loop");

    whileLoop.run();
    doWhileLoop.run();
}
