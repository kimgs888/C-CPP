#include <stdio.h>

void printSize(int arr[], int len) {
	printf("printSize arr = %d", sizeof(arr));
}

int main() {
	int arr[] = { 1,3,5,7,9 };

	printf("%d\n", sizeof(arr)/sizeof(int));

	printSize(arr, sizeof(arr) / sizeof(int));
	return 0;
}