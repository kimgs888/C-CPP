

#include<stdio.h>
#include<stdlib.h>
// ����ȯ������

int main03() {
	int a = 12, b = 10;
	double res;

	res = a / b;
	printf("res = %d\n", res);


	res = (double)a / (double)b;
	printf("res = %d\n", res);

	a = (int)res;
	printf("(int)res = %.1lf �� ����� %d \n", res, a);
	return 0;
}
