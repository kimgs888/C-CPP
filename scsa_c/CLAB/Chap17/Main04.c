#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "person.h"
// 구조체 안에 구조체선언
int main04() {
	Student s = {"둘리",9,1,"국어국문"};
	printf("%s %d %d %s\n", s.p.name, s.p.age, s.grade, s.major);
	
	s.major = (char*)malloc(strlen("IT") + 1);
	strcpy(s.major, "IT");
	printf("%s %d %d %s\n", s.p.name, s.p.age, s.grade,s.major);
	
	free(s.major);
	return 0;
}