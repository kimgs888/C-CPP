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
	// ����ü�� �̸��� �ּҰ� �ƴϴ�
	Person p = { "�Ѹ�",9 };
	printf("%s %d\n", p.name, p.age);

	// ����ü�� �迭
	Person arr[3] = { {"�Ѹ�",9}
		, {"�����",10}
		, {"��ġ",11} };
	printf("%s %d\n", arr[0].name, arr[1].age);

	// ����ü �����ͺ���
	Person* p1 = &p;
	printf("%s %d\n", (*p1).name, (*p1).age);
	// ����ü �����ͺ����� �ɹ����� Ű���� ->
	printf("%s %d\n", p1->name, p1->age);
	
	change(p, &p);

	printf("%s %d\n", p.name, p.age);

	print2(arr);
	return 0;
}