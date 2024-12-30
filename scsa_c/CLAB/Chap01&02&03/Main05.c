#include <stdio.h>

int main05() {
	int a = 10, b;
	char c;
	char str[30];
	
	printf("두개의 정수를 입력하세요\n");
	scanf("%d %d" , &a, &b);
	printf("입력하신값은 %d , %d 입니다\n", a, b);
	
	while (getchar() != '\n');

	printf("문자를 입력하세요\n");
	scanf("%c", &c);
	printf("입력하신값은 %c  입니다\n", c);
	
	printf("문자열을 입력하세요\n");
	scanf("%s", str);
	printf("입력하신값은 %s  입니다\n", str);
	return 0;
}