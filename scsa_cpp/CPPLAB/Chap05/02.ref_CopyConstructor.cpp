//#include <iostream>
//using namespace std;
///*
//	복사생성자가 호출되지 안는 경우
//	1) 객체를 함수의 참조인자로 전달할때
//    2) 객체를 함수의 참조값으로 리턴할때
//*/
//class Sample{
//	char* name;
//	int num1;
//	int num2;
//public :
//	/*Sample() {
//		
//	};*/
//	Sample(const char* name, int num1, int num2) :num1(num1), num2(num2) {
//		cout << "생성자 (const char* name, int num1, int num2)" << endl;
//		int len = strlen(name) + 1;
//		this->name = new char[len];
//		strcpy(this->name, name);
//	}
//	Sample(int num1, int num2) : num1(num1), num2(num2) {
//
//		cout << "생성자 (int num1, int num2)" << endl;
//	};
//	/*복사생성자*/
//	Sample(const Sample& copy) : num1(copy.num1), num2(copy.num2) {
//		// deep copy
//		int len = strlen(copy.name) + 1;
//		this->name = new char[len];
//		strcpy(this->name, name);
//		cout << "복사생성자 (Sample&)" << endl;
//	}
//	
//	~Sample(){
//		delete[] name;
//		cout << "소멸자" << endl;
//	};
//	void print() {
//		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
//	}
//	Sample& getSample() {
//		return *this;
//	}
//};
//void print(Sample& s) {
//	s.print();
//}
//int main() {
//	//Sample s;
//	Sample s1("둘리", 10,20);
//	//s1.print();
//	// 
//	// 3)
//	Sample& r =  s1.getSample();
//	
//	// 2)
//	print(s1);
//	
//	// 1)
//	//Sample s2 = s1;
//	//Sample s2(s1);
//
//	return 0;
//}