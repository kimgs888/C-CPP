//#include <iostream>
//
//using namespace std;
//
//
//class AA {
//public:
//	int num = 10;
//	// �������ε�
//	// �Լ��տ� virtual �� ������ new �� ��ü�� ��������Ʈ �Լ��� �����ϰ�
//	// �������ε�
//	// �ƴϸ� ������ Ÿ���� �Լ��� ȣ��ȴ�
//	virtual void print() {
//		cout << "AA print" << endl;
//	}
//};
//class BB : public AA {
//public:
//	int num = 20;
//	void print() {
//		cout << "BB print" << endl;
//	}
//
//};
//
//int main() {
//	AA a;
//	cout << a.num << endl;
//	BB b;
//	cout << b.num << endl;
//
//	AA* pa = new BB();
//	cout << pa->num << endl;
//	// �������ε� �Լ�
//	pa->print();
//	return 0;
//}
