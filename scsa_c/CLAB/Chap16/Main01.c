#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01() {
	int a = 10;
	a = 20;
	double d = 3.14;

	// 동적메모리할당
	int*p = (int*) malloc(sizeof(int));
	
	memset(p, 0, sizeof(int));
	*p = 20;
	printf("%d\n", *p);
	
	free(p);

	//printf("%d\n", *p);
	return 0;
}