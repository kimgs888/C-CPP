#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 동적할당
// malloc, calloc
// 
// 동적메모리 재할당
// realloc, 

int main03() {
	int* p = (int*)malloc(sizeof(int)*2);
	memset(p, 0, sizeof(int) * 2);

	p[0] = 1;
	*(p + 1) = 5;
	printf("%d %d\n", p[0], p[1]);

	p = (int*)calloc(2, sizeof(int));
	*p = 10;
	printf("%d %d\n", p[0], p[1]);
	p[1] = 20;
	
	printf("before %u\n", p);
	p = (int*)realloc(p, sizeof(int) * 3);
	if (p == NULL) {
		printf("p2 메모리 이상");
		return;
	}
	printf("after %u\n", p);
	printf("%d %d %d\n", p[0], p[1],p[2]);

	free(p);
	
	return 0;
}