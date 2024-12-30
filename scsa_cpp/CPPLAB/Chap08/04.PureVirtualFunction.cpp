//#include <iostream>
//
//using namespace std;
//
//class First {
//public:
//	// 순수가상함수
//	// 순수가상함수는 오버라이드해서 사용해야 한다
//	virtual void print()=0;
//};
//class Second : public First {
//public :
//	void print() {
//		
//	}
//};
//
//void print(First* f) {
//	f->print();
//}
//
//int main() {
//	//First* f = new First();
//	//f->print();
//	Second* s = new Second();
//	print(s);
//	delete s;
//	return 0;
//}