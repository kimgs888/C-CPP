//#include <iostream>
//
//using namespace std;
//
//class Father {
//private :
//	
//protected:
//	int num = 10;
//public :
//	Father() { cout << "Father 생성자" << endl; }
//	
//	Father(int num):num(num ) { cout << "Father 생성자" << endl; }
//	
//	~Father() { cout << "Father 소멸자" << endl; }
//	void printNum() {
//		cout << "num : " << num << endl;
//	}
//
//};
//class Son : public Father{
//private:
//	int num2 = 20;
//public:
//	Son(): Father() {}
//	Son(int num, int num2): Father(num) , num2(num2)
//	{ cout << "Son 생성자" << endl; }
//	~Son() { cout << "Son 소멸자" << endl; }
//	void printNum2() {
//		cout << "num2 : " << num2 << endl;
//	}
//	// override
//	// 리턴 이름 파라미터가 물려받은 함수와 같게하고 구현부를 재정의 하는것 
//	void printNum() {
//		cout << "num : " << num <<", num2 : "<< num2 << endl;
//	}
//};
//
//int main() {
//	Father f(100);
//	f.printNum();
//	
//	Son s(100, 200);
//	s.printNum();
//	//s.printNum2();
//
//	return 0;
//}