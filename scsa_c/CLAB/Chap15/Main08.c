#include <stdio.h>

int add(int a, int b);
int minus(int a, int b);

int funcPoint(int (*fp)(int,int), int a, int b) {
	return fp(a, b);
}
/*
	함수포인터
*/
int main08() {
	

	printf("%d\n", add(10, 5));
	printf("%d\n", minus(10, 5));

	printf("%u %u\n", add, minus);
	
	// 함수포인터변수
	int (*fp)(int,int);
	fp = add;
	printf("%u %u\n", fp, add);

	printf("%d\n", fp(10, 5));
	
	fp = minus;
	printf("%d\n", fp(10, 5));

	printf("%d\n", funcPoint(add, 10, 5));
	printf("%d\n", funcPoint(minus, 10, 5));

	return 0;
}

int add(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}