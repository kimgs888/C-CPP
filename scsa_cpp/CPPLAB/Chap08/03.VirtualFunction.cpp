//#include <iostream>
//
//using namespace std;
//
//
//class AA {
//public:
//	int num = 10;
//	// 동적바인딩
//	// 함수앞에 virtual 가 붙으면 new 한 객체의 오버라이트 함수를 실행하고
//	// 정적바인딩
//	// 아니면 선언한 타입의 함수가 호출된다
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
//	// 정적바인딩 함수
//	pa->print();
//	return 0;
//}
