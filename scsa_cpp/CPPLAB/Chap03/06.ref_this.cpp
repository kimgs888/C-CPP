#include <iostream>
using namespace std;

class Sample {
	int num;
	int num2;
public:
	Sample(int num , int num2) :num(num), num2(num2) {}
	void printNum() {
		cout << this->num << endl;

	}
	Sample& getPointer() {
		return *this;
	}
	Sample& getNum() {
		cout << this->num << endl;
		return *this;
	}
	Sample& getNum2() {
		cout << this->num2 << endl;
		return *this;
	}
};
int main() {
	Sample s(10,20);
	s.getNum().getNum2().getNum();
	

	return 0;
}
