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
	// 정적선언방식
	Simple s;
	//s.age = 9999999;
	s.print();
	// 동적선언방식
	Simple* ps = new Simple;

	ps->print();

	// malloc 과 new 는 작동방식이 다르다	
	// Simple* test = (Simple*)malloc(sizeof(Simple));

	delete ps;
	return 0;
}



