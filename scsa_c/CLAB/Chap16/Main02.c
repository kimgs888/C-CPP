#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����޸��Ҵ��� �迭ó�� ����
int main02() {
	int len = 5;
	int* p = (int*)malloc(sizeof(int)*len);
	if (p == NULL) {
		printf("�޸𸮺���\n");
		return;
	}

	*p = 20;
	*(p + 1) = 30;
	*(p + 2) = 40;
	p[3] = 50;
	p[4] = 60;
	
	for (int i = 0;i < len;i++) {
		printf("%d %d\n", *(p + i), p[i]);
	}

	free(p);

	return 0;
}