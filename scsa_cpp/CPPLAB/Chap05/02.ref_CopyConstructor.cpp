//#include <iostream>
//using namespace std;
///*
//	��������ڰ� ȣ����� �ȴ� ���
//	1) ��ü�� �Լ��� �������ڷ� �����Ҷ�
//    2) ��ü�� �Լ��� ���������� �����Ҷ�
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
//		cout << "������ (const char* name, int num1, int num2)" << endl;
//		int len = strlen(name) + 1;
//		this->name = new char[len];
//		strcpy(this->name, name);
//	}
//	Sample(int num1, int num2) : num1(num1), num2(num2) {
//
//		cout << "������ (int num1, int num2)" << endl;
//	};
//	/*���������*/
//	Sample(const Sample& copy) : num1(copy.num1), num2(copy.num2) {
//		// deep copy
//		int len = strlen(copy.name) + 1;
//		this->name = new char[len];
//		strcpy(this->name, name);
//		cout << "��������� (Sample&)" << endl;
//	}
//	
//	~Sample(){
//		delete[] name;
//		cout << "�Ҹ���" << endl;
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
//	Sample s1("�Ѹ�", 10,20);
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