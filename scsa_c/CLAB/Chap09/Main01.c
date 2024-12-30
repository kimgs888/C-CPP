#include <stdio.h>

int main01() {
	int a = 10;
	printf("%d %u %d\n", a, &a, *&a);

	int* p = &a;
	printf("%u %d %u\n", p, *p, &p);

	int b = 20;

	p = &b;

	printf("%u %d %u\n", p, *p, &p);
	char* c;
	double* d;
	printf("p size = %d, %d, %d\n", sizeof(p),sizeof(c),sizeof(d));
	return 0;
}