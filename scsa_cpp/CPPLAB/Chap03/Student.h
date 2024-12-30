#pragma once
#include <iostream>
#include <cstdio>
#include <cstring>
class Student {
private :
	char name[20 + 1];
	int age;
protected:
public:
	Student();
	Student(const char* name, int age);
	Student(char* name, int age);
	//¼Ò¸êÀÚ
	~Student();
	void setName(char* name);
	const char* getName() const;
	void setAge(int a);
	int getAge() const;
	void print() const;
};