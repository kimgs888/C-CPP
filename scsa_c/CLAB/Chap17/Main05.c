#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "person.h"

void print3(Person** p, int len) {
	for (int i = 0;i < len;i++) {
		//printf("%s %d\n", (*p[i]).name, (*p[i]).age);
		//printf("%s %d\n", p[i]->name, p[i]->age);
		printf("%s %d\n", (*(p + i))->name, (*(*(p + i))).age);
	}
}
// ����ü�� �����͹迭
int main05() {
	Person* p[3];
	printf("%d\n", sizeof(p));
	Person p1 = {"�Ѹ�",9};
	Person p2 = { "�����",10 };
	Person p3 = { "��ġ",11 };
	p[0] = &p1;
	p[1] = &p2;
	p[2] = &p3;
	
	print3(p,3);
	/*
	for (int i = 0;i < 3;i++) {
		printf("%s %d\n", (*p[i]).name, (*p[i]).age);
		printf("%s %d\n", p[i]->name, p[i]->age);
	}
	*/

	return 0;
}





