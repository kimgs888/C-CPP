#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) (a) > (b) ? (a) : (b)
#define SUM(a,b) ((a)+(b))

int main03() {
	int a = 10;
	int b = 5;
	int x = 4, y = 2;
	printf("max : %d\n", a > b ? a : b);
	
	printf("max : %d\n", MAX(a,b));
	printf("max : %d\n", MAX(x, y));
	printf("sum : %d\n", SUM(x, y));
	return 0;
}