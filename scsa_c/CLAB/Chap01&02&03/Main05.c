#include <stdio.h>

int main05() {
	int a = 10, b;
	char c;
	char str[30];
	
	printf("�ΰ��� ������ �Է��ϼ���\n");
	scanf("%d %d" , &a, &b);
	printf("�Է��ϽŰ��� %d , %d �Դϴ�\n", a, b);
	
	while (getchar() != '\n');

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%c", &c);
	printf("�Է��ϽŰ��� %c  �Դϴ�\n", c);
	
	printf("���ڿ��� �Է��ϼ���\n");
	scanf("%s", str);
	printf("�Է��ϽŰ��� %s  �Դϴ�\n", str);
	return 0;
}