//#include <iostream>
//using namespace std;
//
//class Sample {
//private:
//	int num = 10;
//public :
//	Sample() {}
//	Sample(const int& num) {
//		this->num = num;
//	}
//	
//	void change2()/*const*/ {
//
//	}
//	// 값변경이 불가하다
//	// const 함수에서는 const 함수만 호출할수 있다
//	void change() const {
//		//num++;
//		//change2();
//	}
//	
//};
//
//int main() {
//	// 변수의 상수화
//	const int a = 10;
//	//a++;
//	// pa 변수를 이용해서 값변경을 할수없다
//	const int* pa = &a;
//	//(*pa)++;
//	int b = 20;
//	int* const pb = &b;
//	// pb 가 가르키는 변수를 변경할수 없다
//	//pb = &a;
//	
//
//	return 0;
//}