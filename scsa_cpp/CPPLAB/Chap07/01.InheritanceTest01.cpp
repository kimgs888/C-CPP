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
//	Father() { cout << "Father ������" << endl; }
//	
//	Father(int num):num(num ) { cout << "Father ������" << endl; }
//	
//	~Father() { cout << "Father �Ҹ���" << endl; }
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
//	{ cout << "Son ������" << endl; }
//	~Son() { cout << "Son �Ҹ���" << endl; }
//	void printNum2() {
//		cout << "num2 : " << num2 << endl;
//	}
//	// override
//	// ���� �̸� �Ķ���Ͱ� �������� �Լ��� �����ϰ� �����θ� ������ �ϴ°� 
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