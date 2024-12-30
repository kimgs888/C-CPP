#include <stdio.h>

/*
*	정수형
	short		2byte 
	int			4byte
	long		4byte
	long long	8byte

	실수형
	float		4byte
	double		8byte
	long double 8byte

	문자형
	char		1 byte

	--------------------------------
	%d
	%f
	%lf (long float)
	%c
	%s
	%o (8진수)
	%x (16진수)
	%u (부호가 없는 10진수)
*/


int main02() {

	printf("Hello SCSA \n");
	int a = 10;
	char c = 'A';

	printf("%d \n",a);
	printf("%c \n",c);
	printf("%d \n",c);

	printf("%d %d %d %d\n", sizeof(a), sizeof(c), sizeof(int));

	unsigned int  b = -1;
	printf("%d\n", b);


	return 0;
}