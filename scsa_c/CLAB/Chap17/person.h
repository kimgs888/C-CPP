#pragma once

typedef unsigned int UINT;

typedef struct person {
	char name[20];
	//char g;
	int age;
} Person;

typedef struct student {
	struct person p;
	int grade;
	// 포인터변수인경우 메모리관리필요하다
	char* major;
} Student;


