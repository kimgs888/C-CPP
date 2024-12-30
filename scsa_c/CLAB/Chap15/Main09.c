#include <stdio.h>
/*
	void Æ÷ÀÎÅÍ
*/
int main() {
	int a = 10;
	double d = 3.14;
	char c = 'T';

	void *p;
	p = &a;
	printf("%d %d\n", a, *(int*)p);
	p = &d;
	printf("%.3lf %.3lf\n", d, *(double*)p);
	p = &c;
	printf("%c %c\n", c, *(char*)p);
	return 0;
}