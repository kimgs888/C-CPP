#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "person.h"
// ����ü �ȿ� ����ü����
int main04() {
	Student s = {"�Ѹ�",9,1,"�����"};
	printf("%s %d %d %s\n", s.p.name, s.p.age, s.grade, s.major);
	
	s.major = (char*)malloc(strlen("IT") + 1);
	strcpy(s.major, "IT");
	printf("%s %d %d %s\n", s.p.name, s.p.age, s.grade,s.major);
	
	free(s.major);
	return 0;
}