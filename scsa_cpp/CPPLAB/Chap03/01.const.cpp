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
//	// �������� �Ұ��ϴ�
//	// const �Լ������� const �Լ��� ȣ���Ҽ� �ִ�
//	void change() const {
//		//num++;
//		//change2();
//	}
//	
//};
//
//int main() {
//	// ������ ���ȭ
//	const int a = 10;
//	//a++;
//	// pa ������ �̿��ؼ� �������� �Ҽ�����
//	const int* pa = &a;
//	//(*pa)++;
//	int b = 20;
//	int* const pb = &b;
//	// pb �� ����Ű�� ������ �����Ҽ� ����
//	//pb = &a;
//	
//
//	return 0;
//}