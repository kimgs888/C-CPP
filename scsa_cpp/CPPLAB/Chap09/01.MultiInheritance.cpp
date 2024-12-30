//#include <iostream>
//
//using namespace std;
//// 다중상속은 모호성과 다중객체생성의 문제점이 있다
//
//class Father {
//public:
//	virtual void print() {
//		cout << "father" << endl;
//	}
//};
//class Mother {
//public:
//	virtual void print() {
//		cout << "mother" << endl;
//	}
//};
//
//class Son : public Father, public Mother {
//public:
//	/*virtual void print() {
//		cout << "son" << endl;
//	}*/
//};
//
//int main() {
//	Father * f =  new Son();
//	Mother* m = new Son();
//	Son* s = new Son();
//	f->print();
//	m->print();
//	s->Father::print();
//	s->Mother::print();
//	return 0;
//}