#include <stdio.h>

void change1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void change2(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
};
void change3(int* a, int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main05() {
	int a = 10;
	int b = 20;
	change1(a, b);
	printf("%d %d\n", a, b);
	change2(&a, &b);
	printf("%d %d\n", a, b);
	change3(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}