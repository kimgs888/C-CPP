#include <stdio.h>

int main03() {
	int a=10, b=20, c=0;
	c = a + b; 
	c = a - b;
	c = a * b;
	c = a / b;

	double d = (double)a / (double)b;

	printf("%d / %d = %.1lf\n", a, b, d);
	return 0;
}