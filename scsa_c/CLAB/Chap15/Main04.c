#include <stdio.h>


void printa(int* p) {}
void printb(int** p) {}

int main04() {
	int a = 10;
	int arr[] = { 1,3,5 };
	int arr2[2][3] = { { 1,3,5 } ,{ 7,9,11 } };
	int* parr[3];
	
	printa(&a);
	printa(arr);
	printb(parr);
	// **Ÿ�� ���ڿ� �������迭�� ���ڷ� ������ �ȵȴ�
	printb(arr2);
	printa(arr2);
	return 0;
}