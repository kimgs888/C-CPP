#include <iostream>

using namespace std;
// 다중상속은 같은 상위객체가 여러개 만들어지는 문제가
// 발생할수 있다 이문제를 해결하기 위해서 가상상속이 나온다
class Grand {

};

class Father : virtual public Grand {
public:
	virtual void print() {
		cout << "father" << endl;
	}
};
class Mother : virtual public Grand{
public:
	virtual void print() {
		cout << "mother" << endl;
	}
};

class Son : public Father, public Mother {
public:
	/*virtual void print() {
		cout << "son" << endl;
	}*/
};

int main() {
	Father* f = new Son();
	Mother* m = new Son();
	Son* s = new Son();
	f->print();
	m->print();
	s->Father::print();
	s->Mother::print();
	return 0;
}