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
//	// �����ڰ� ȣ��ɼ� ���� ������ ��ü������ �ȵȴ�
//	// Sample s;
//	// static �ɹ��Լ��� �̿��Ͽ� ��ü�� �����Ѵ�(Singleton pattern)
//	Sample*s = Sample::getInstance();
//	s->print();
//	Sample* s1 = Sample::getInstance();
//
//	return 0;
//}
//
