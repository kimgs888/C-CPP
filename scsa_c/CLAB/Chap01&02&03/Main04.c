#include <stdio.h>

int main04() {
	int a = 10;

	printf("%d %u\n", a, *&a);
	return 0;
}