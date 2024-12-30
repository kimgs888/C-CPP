#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	°ø¿ëÃ¼
*/
union student {
	int num;
	double grade;
};
int main09() {
	printf("%d\n", sizeof(union student));

	union student s1;
	s1.num = 10;
	printf("s1.num = %d\n", s1.num);

	s1.grade = 3.14;
	printf("s1.grade = %.2lf\n", s1.grade);

	printf("s1.num = %d\n", s1.num);
	return 0;
}