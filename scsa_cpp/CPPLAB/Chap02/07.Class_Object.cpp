#include <iostream>
using namespace std;

class Simple {
private:
	int age = 10;
protected:
public:
	Simple() {
		cout << "constuctor" << endl;
	}
	void print() {
		cout << "Simple class a = " << age << endl;
	}
};

int main() {
	// ����������
	Simple s;
	//s.age = 9999999;
	s.print();
	// ����������
	Simple* ps = new Simple;

	ps->print();

	// malloc �� new �� �۵������ �ٸ���	
	// Simple* test = (Simple*)malloc(sizeof(Simple));

	delete ps;
	return 0;
}



