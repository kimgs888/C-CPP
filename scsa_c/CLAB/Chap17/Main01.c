#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
* userDefine datatype struct
* ��������� ����ŸŸ��
* 
*/
#include "person.h"

void printPerson(Person p) {
	printf("%s %d\n", p.name, p.age);
}

int main01() {
	int a = 10;
	UINT b;

	struct person p = {"�Ѹ�",9};
	printf("%s %d\n", p.name, p.age);
	strcpy(p.name , "�����");
	p.age = 21;

	printPerson(p);
	
	Person p1 = { "��浿",31 };
	printPerson(p1);
	return 0;
}





