#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profile.h"
int main05() {
	
	FILE* wfp = fopen("profile.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "���Ͼ��� ���� ���⸦ �����߽��ϴ�\n");
		return -1;
	}

	int cnt = 0;

	printf("�Է��Ͻ� ������ �Է��ϼ���\n");
	scanf("%d", &cnt);

	Profile* parr = (Profile*)malloc(sizeof(Profile) * cnt);

	for (int i = 0; i < cnt; i++)
	{
		printf("�̸��� �Է��ϼ���\n");
		scanf("%s", (parr + i)->name);
		printf("���̸� �Է��ϼ���\n");
		scanf("%d", &(parr + i)->age);
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("�̸� : %s, ���� : %d\n", (parr + i)->name, (parr + i)->age);
		fprintf(wfp, "%s %d\n", (parr + i)->name, (parr + i)->age);
	}
	free(parr);
	fclose(wfp);
	
	return 0;
}



