#include <stdio.h>
#include "Operator.h"

int main01() {
	int a = 5, b=3, res=0;
	res = sum(a, b);   // ȣ���
	res = minus(a, b);   // ȣ���
	res = cross(a, b);   // ȣ���
	res = division(a, b);   // ȣ���

	printf("%d\n", res);

	return 0;
}


