#include <iostream>
#include <cstring>
using namespace std;

class Person {
private :
	//char name[20];
	char* name = nullptr;
	int age;
public:
	Person() {
		cout << "생성자" << endl;
	}
	Person(const char* name, int age):age(age) {
		cout << "생성자 const char* name, int age" << endl;
		int len = strlen(name) + 1;
		this->name = new char[len];
		strcpy(this->name, name);
		//this->age = age;
	}
	~Person() {
		cout << "소멸자" << endl;
		if(this->name != nullptr) delete[] name;
	}
	void print() {
		cout << "name : " << this->name << ", age : " << this->age << endl;
	}
};
int main() {
	Person p("둘리", 9);
	p.print();
	// 객체배열
	Person arr[3];
	
	// 객체의 포인터배열
	Person* ps = new Person("도우너", 10);

	Person* parr[3];
	for (int i = 0;i < 3;i++) {
		parr[i] = new Person;
	}
	delete ps;
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}