#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "person.h"

void change(Person p, Person* pa) {
	// p : call by value
	p.age++;
	// pa : call by address
	pa->age++;
}
void print2(Person* p) {

}
int main03() {
	// 구조체의 이름은 주소가 아니다
	Person p = { "둘리",9 };
	printf("%s %d\n", p.name, p.age);

	// 구조체의 배열
	Person arr[3] = { {"둘리",9}
		, {"도우너",10}
		, {"또치",11} };
	printf("%s %d\n", arr[0].name, arr[1].age);

	// 구조체 포인터변수
	Person* p1 = &p;
	printf("%s %d\n", (*p1).name, (*p1).age);
	// 구조체 포인터변수의 맴버접근 키워드 ->
	printf("%s %d\n", p1->name, p1->age);
	
	change(p, &p);

	printf("%s %d\n", p.name, p.age);

	print2(arr);
	return 0;
}