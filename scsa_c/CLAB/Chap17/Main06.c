#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "person.h"
// ����ü�� �����޸� �Ҵ�
int main06() {
	// ����������
	Person person;
	// ����������
	Person* p = (Person*)malloc(sizeof(Person));
	strcpy(p->name, "�Ѹ�");
	p->age = 11;
	printf("%s %d\n", p->name, p->age);

	Person* ps[3];
	ps[0] = (Person*)malloc(sizeof(Person));
	strcpy(ps[0]->name, "�����");
	ps[0]->age = 12;
	printf("%s %d\n", ps[0]->name, ps[0]->age);
	// ���� �޸� �Ҵ� ���̶� ������ �߻��Ѵ�
	//strcpy(ps[1]->name, "��浿");

	ps[1] = (Person*)malloc(sizeof(Person));
	ps[2] = (Person*)malloc(sizeof(Person));
	// �޸� �Ҵ��� ���̱� ������ �� ��
	strcpy(ps[1]->name, "��浿");

	Person** pp = ps;
	printf("%s %d\n", (*(pp + 0))->name, (*(*(pp + 0))).age);

	// ����ü�� ���������� �Ŀ��� �������� free �� �־�� �Ѵ�
	free(ps[0]);
	free(ps[1]);
	free(ps[2]);

	return 0;
}