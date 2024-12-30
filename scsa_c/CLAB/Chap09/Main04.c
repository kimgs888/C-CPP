#include <stdio.h>

void change(int* a) {
	//*a = 20;
};


int main04() {
	int arr[] = { 1,3,5 };
	const int a =  10;
	//a = 20;
	const int* pa = &a;
	//*pa = 30;
	printf("%d\n", a);
	
	change(&a);

	return 0;
}