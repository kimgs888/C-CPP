//#include <iostream>
//using namespace std;
//
//class Sample {
//public:
//	int num;
//	Sample() {}
//	Sample(int num) :num(num) {}
//
//	// ������ const �� ������ ������ �Ұ�
//	// �Լ��̸��� const ������ �ɹ������� �����Ҽ� ����
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
//	// ��ü�� �����Ҷ� const ������ �����ϸ� 
//	// const �ɹ������̰ų� const �ɹ��Լ��� ȣ���Ҽ��ֽ��ϴ�
//	const Sample obj(10);
//	// obj.change();
//	// obj.num = 10; 
//	obj.print();
//
//	Sample obj2(20);
//	obj2.print();
//	return 0;
//}