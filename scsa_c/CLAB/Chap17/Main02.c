#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)

#include "person.h"


int main02() {
	Person p1 = {"�����",10};
	// ����ü�� ����(call by value)
	Person p2 = p1;
	p1.age = 20;
	printPerson(p1);
	printPerson(p2);

	printf("%d\n", sizeof(Person));


	return 0;
}