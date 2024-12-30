#include <stdio.h>
#include "Operator.h"

int main01() {
	int a = 5, b=3, res=0;
	res = sum(a, b);   // 호출부
	res = minus(a, b);   // 호출부
	res = cross(a, b);   // 호출부
	res = division(a, b);   // 호출부

	printf("%d\n", res);

	return 0;
}


