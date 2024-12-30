#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

Student::Student() {
	cout << "Student 생성자()" << endl;
}
Student::Student(const char* name, int age) {
	cout << "Student 생성자(const char*name, age)" << endl;
	strcpy(this->name, name);
	this->age = age;
}
Student::Student(char* name, int age) {
	cout << "Student 생성자(char*name, age)" << endl;
	strcpy(this->name, name);
	this->age = age;
}
Student::~Student() {
	cout << "Student 소멸자" << endl;
}

void Student::setName(char* name) {
	strcpy(this->name, name);
};
const char* Student::getName() const {
	return this->name;
}
void Student::setAge(int age) {
	this->age = age;
}
int Student::getAge() const{
	return this->age;
}
// 함수이름뒤에 const 가 붙으면 맴버변수의 값을 변경할수 없다
void Student::print() const {
	cout << "name : " << this->name << ", age : " << this->age << endl;
}