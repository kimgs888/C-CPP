#include <stdio.h>

int main03() {
	int arr[] = { 1,3,5 };

	printf("%d %d %d %d\n", *(arr+0),arr[0], *(arr + 1), arr[1]);
	int* pa = arr+1;
	printf("%d %d %d %d\n", *(pa + 0), pa[0], *(pa + 1), pa[1]);
	// 배열의 주소값은 변경할수 없다
	//arr = arr + 1;
	// 포인트변수의 값은 변경할수 있다
	pa = pa + 1;
	printf("%d\n", pa[0]);
	// 포인트변수의 표현방식으로 변환해보자
	pa = arr;
	arr[2] = arr[0] + arr[1];
	pa[2] = pa[0] + pa[1];
	*(pa + 2) = *(pa+0) + *(pa + 1);

	return  0;
}