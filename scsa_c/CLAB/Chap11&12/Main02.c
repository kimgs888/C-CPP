#include <stdio.h>

int main02() {
	char a;
	int b;
	scanf("%c %d", &a, &b);
	printf("%c %d\n", a, b);

	while (getchar() != '\n');
	
	a = getchar();
	putchar(a);
	return 0;
}