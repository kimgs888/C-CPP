

#include<stdio.h>
#include<stdlib.h>

int main01() {
	int a;
	printf("������ �Է��ϼ���\n");
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("�Է��Ͻ� ���� %d �� ¦���Դϴ�.\n", a);
	}
	else {
		printf("�Է��Ͻ� ���� %d �� Ȧ���Դϴ�.\n", a);
	}
	return 0;
}
