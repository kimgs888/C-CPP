#include <stdio.h>

void printArr(int (*)[]);

int main06() {
	int arr[2][3] = { {1,3,5},{7,9,11} };
	printf("%u %u\n", arr, arr[0]);
	// 다차원배열의 장점을 살릴수가 없습니다
	int* p = arr;
	// 이러시면 안됩니다
	int** paa = arr;

	// 배열포인터
	// 2차원배열을 1차원포인터인 배열포인터로 가르킬수 있다
	int (*arrp)[3] = arr;
	// 이차원배열을 배열포인터로 지정하면 이차원배열의 이점을 배열포이터에서 활용할수 있다
	printf("%u %u %d %d", arr, arrp, arrp[0][0],*(*(arrp+0)+0));
	// 배열포인터는 이중포인터로 찍어서 활용하지 안습니다
	//int** pp = &arrp;
	printArr(arr);
	return 0;
}

void printArr(int (*arr)[3]) {
	printf("printArr sizeof = %d\n", sizeof(arr));
}