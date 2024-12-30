#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
* userDefine datatype struct
* 사용자정의 테이타타입
* 
*/
#include "person.h"

void printPerson(Person p) {
	printf("%s %d\n", p.name, p.age);
}

int main01() {
	int a = 10;
	UINT b;

	struct person p = {"둘리",9};
	printf("%s %d\n", p.name, p.age);
	strcpy(p.name , "도우너");
	p.age = 21;

	printPerson(p);
	
	Person p1 = { "고길동",31 };
	printPerson(p1);
	return 0;
}





