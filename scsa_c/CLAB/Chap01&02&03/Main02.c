#include <stdio.h>

/*
*	������
	short		2byte 
	int			4byte
	long		4byte
	long long	8byte

	�Ǽ���
	float		4byte
	double		8byte
	long double 8byte

	������
	char		1 byte

	--------------------------------
	%d
	%f
	%lf (long float)
	%c
	%s
	%o (8����)
	%x (16����)
	%u (��ȣ�� ���� 10����)
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