#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# pragma warning (_CRT_SECURE_NO_WARNINGS)
#define NAME_CAT(x,y) (x ## y)
#define PRINT_EX(x) printf(#x " = %d\n",x)
#define PRINT_STR(x) printf(#x)

int main05() {
	int a1, a2;
	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 5;
	printf("a1 = %d, a2 = %d\n", a1,a2);

	PRINT_EX(a1 + a2);
	
	PRINT_STR(HELLO SCSA);
	return 0;
}