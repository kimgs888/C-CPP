#include <iostream>

using namespace std;
// ���߻���� ���� ������ü�� ������ ��������� ������
// �߻��Ҽ� �ִ� �̹����� �ذ��ϱ� ���ؼ� �������� ���´�
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