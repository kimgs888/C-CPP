//#include <iostream>
//using namespace std;
//typedef struct student {
//	char name[20];
//	int age;
//	// cpp ����ü���� �Լ������� �����ϴ�
//	void print() {
//		cout << "name = " << name << ", age = " << age << endl;
//	}
//} Student;
//
//int main() {
//	// ����������
//	Student s1;
//	cout << sizeof(s1) << endl;
//	strcpy(s1.name, "�Ѹ�");
//	s1.age = 9;
//	s1.print();
//	// ����������
//	Student* ps = (Student*)malloc(sizeof(Student));
//	strcpy(ps->name, "�����");
//	ps->age = 10;
//	ps->print();
//	free(ps);
//
//	return 0;
//}