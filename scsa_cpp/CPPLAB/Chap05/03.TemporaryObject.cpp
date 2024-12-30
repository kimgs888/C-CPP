#include <iostream>
using namespace std;

class Temporary {
private :
	int num = 10;
public:
	Temporary() {
		cout << "������ Temporary" << endl;
	}
	Temporary(int a):num(a) {
		cout << "������ Temporary(int a)" << endl;
	}
	~Temporary() {
		cout << "�Ҹ��� Temporary" << endl;
	}
	void print() {
		cout << "Print num :" << num << endl;
	}
	const void print2() const {
		cout << "Print num :" << num << endl;
	}
};
int main() {
	Temporary(100);
	cout << "---------------------" << endl;
	Temporary(100).print();
	cout << "---------------------" << endl;
	const Temporary &ref =  Temporary(100);
	ref.print2();
	return 0;
}