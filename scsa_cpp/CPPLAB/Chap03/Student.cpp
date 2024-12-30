#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

Student::Student() {
	cout << "Student ������()" << endl;
}
Student::Student(const char* name, int age) {
	cout << "Student ������(const char*name, age)" << endl;
	strcpy(this->name, name);
	this->age = age;
}
Student::Student(char* name, int age) {
	cout << "Student ������(char*name, age)" << endl;
	strcpy(this->name, name);
	this->age = age;
}
Student::~Student() {
	cout << "Student �Ҹ���" << endl;
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
// �Լ��̸��ڿ� const �� ������ �ɹ������� ���� �����Ҽ� ����
void Student::print() const {
	cout << "name : " << this->name << ", age : " << this->age << endl;
}