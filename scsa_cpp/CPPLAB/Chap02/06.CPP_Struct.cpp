//#include <iostream>
//using namespace std;
//typedef struct student {
//	char name[20];
//	int age;
//	// cpp 구조체에서 함수선언이 가능하다
//	void print() {
//		cout << "name = " << name << ", age = " << age << endl;
//	}
//} Student;
//
//int main() {
//	// 정적선언방식
//	Student s1;
//	cout << sizeof(s1) << endl;
//	strcpy(s1.name, "둘리");
//	s1.age = 9;
//	s1.print();
//	// 동적선언방식
//	Student* ps = (Student*)malloc(sizeof(Student));
//	strcpy(ps->name, "도우너");
//	ps->age = 10;
//	ps->print();
//	free(ps);
//
//	return 0;
//}