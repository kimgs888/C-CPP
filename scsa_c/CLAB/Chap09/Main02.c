#include <stdio.h>


void printSize(int* arr, int len) {

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}

int main02() {
	int arr[3] = { 1,3,5 };
	int* pa = arr;
	printf("%d %d %d\n", pa[0], pa[1], pa[2]);

	printSize(arr,3);
	return 0;
}