//#include <iostream>
//using namespace std;
//// private constructor
//// Singleton pattern
//class Sample {
//private:
//	static int data;
//	Sample() {}
//	
//public :
//	static Sample* getInstance() {
//		return new Sample;
//	}
//	void print() {
//		cout << "data = " << data << endl;
//	}
//};
//int Sample :: data = 10;
//
//
//
//int main() {
//	// 생성자가 호출될수 없기 때문에 객체생성이 안된다
//	// Sample s;
//	// static 맴버함수를 이용하여 객체를 생성한다(Singleton pattern)
//	Sample*s = Sample::getInstance();
//	s->print();
//	Sample* s1 = Sample::getInstance();
//
//	return 0;
//}
//
