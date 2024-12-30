#include <stdio.h>

void change(int , int );
void change2(int[3]);
int main02() {
	int a = 5, b = 3;
	change(a, b);
	printf("main : a=%d b=%d \n", a, b);
	
	int arr[3] = { 1,3,5 };
	printf("main1 : arr[0]=%d arr[1]=%d arr[2]=%d\n", arr[0], arr[1], arr[2]);
	change2(arr);
	printf("main2 : arr[0]=%d arr[1]=%d arr[2]=%d\n", arr[0], arr[1], arr[2]);
	return 0;
}
void change2(int arr[3]) {
	arr[0] = 10;
	printf("change2 : arr[0]=%d arr[1]=%d arr[2]=%d\n", arr[0], arr[1], arr[2]);
}

void change(int a , int b) {
	a = 20;
	b = 30;
	printf("change : a=%d b=%d \n", a, b);
}