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
	// �����ͺ����ΰ�� �޸𸮰����ʿ��ϴ�
	char* major;
} Student;


