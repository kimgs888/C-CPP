#include <stdio.h>

/*
	포인트 배열
*/
int main01(){

	int arr[3][2] = { {1,2},{3,4},{5,6} };
	int* p1 = arr[0];
	int* p2 = arr[1];
	int* p3 = arr[2];
	// 포인트 배열
	int* ps[3] = {p1,p2,p3};
	printf("%d\n", ps[0][0]);

	printf("%d %d %d\n", *(p1 + 1), *p2, *p3);

	int a[] = { 1,3,5 };
	int b[] = { 11,33,55,88 };
	int c[] = { 9,4 };
	
	ps[0] = a;
	ps[1] = b;
	ps[2] = c;
	printf("%d\n", ps[0][0]);
	printf("%d\n", ps[1][3]);
	printf("%d\n", ps[2][3]);

	
	return 0;
}