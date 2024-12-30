#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "person.h"
// 구조체의 동적메모리 할당
int main06() {
	// 정적선언방식
	Person person;
	// 동적선언방식
	Person* p = (Person*)malloc(sizeof(Person));
	strcpy(p->name, "둘리");
	p->age = 11;
	printf("%s %d\n", p->name, p->age);

	Person* ps[3];
	ps[0] = (Person*)malloc(sizeof(Person));
	strcpy(ps[0]->name, "도우너");
	ps[0]->age = 12;
	printf("%s %d\n", ps[0]->name, ps[0]->age);
	// 아직 메모리 할당 전이라 에러가 발생한다
	//strcpy(ps[1]->name, "고길동");

	ps[1] = (Person*)malloc(sizeof(Person));
	ps[2] = (Person*)malloc(sizeof(Person));
	// 메모리 할당한 후이기 때문에 잘 됨
	strcpy(ps[1]->name, "고길동");

	Person** pp = ps;
	printf("%s %d\n", (*(pp + 0))->name, (*(*(pp + 0))).age);

	// 구조체를 동적생성한 후에는 잊지말고 free 해 주어야 한다
	free(ps[0]);
	free(ps[1]);
	free(ps[2]);

	return 0;
}