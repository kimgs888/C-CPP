//#include <iostream>
//using namespace std;
//
//class Sample {
//public:
//	int num;
//	Sample() {}
//	Sample(int num) :num(num) {}
//
//	// 변수에 const 가 붙으면 값변경 불가
//	// 함수이름에 const 붙으면 맴버변수를 변경할수 없다
//	void change(int num2) { 
//		num2++;
//		num++;
//	}
//	void print() const{
//		cout << "print() const num :" << num << endl;
//	}
//	void print() {
//		cout << "print() num : " << num << endl;
//	}
//};
//
//int main() {
//	// 객체를 생성할때 const 변수로 선언하면 
//	// const 맴버변수이거나 const 맴버함수만 호출할수있습니다
//	const Sample obj(10);
//	// obj.change();
//	// obj.num = 10; 
//	obj.print();
//
//	Sample obj2(20);
//	obj2.print();
//	return 0;
//}