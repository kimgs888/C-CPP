#include <stdio.h>
void print(int* pp[]) {
	// 포인트배열은 함수의 인자로 넘어올때 이중포인터로 변환되어진다
	printf("print parr size = %d\n", sizeof(pp));

	//printf("%d %d %d\n", *(*(pp + 0) + 0), *(*(pp + 1) + 2), *(*(pp + 2) + 1));
	//printf("%d \n", *pp);
}

int main03() {
	int a = 10;
	int* p = &a;
	int** pp = &p;

	printf("%u %u %u\n", pp, *pp, **pp);
	**pp = 20;
	printf("%d\n", a);

	int arr[] = { 1,3,5 };
	
	p = arr;
	printf("%d %d\n", p[0],*p);

	int arr2[2][2] = { {1,3 },{5,7} };
	pp = &p;
	int arr3[] = { 7,9,11 };
	
	int* parr[3] = { &a, arr, arr3 };
	pp = parr;

	printf("%d %d\n", p[0], *p);

	printf("%d %d %d\n", pp[0][0], pp[1][2], pp[2][1]);
	
	printf("%d %d %d\n", *(*(pp+0)+0), *(*(pp+1)+2) , *(*(pp + 2) + 1));

	print(parr);

	print(arr2);
	return 0;
}

