#include <stdio.h>
#include <string.h>
#include "profile.h"
int main04() {
	Profile p = { "�Ѹ�" ,7 };

	FILE* wfp = fopen("profile.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "���Ͼ��� ���� ���⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "���Ͼ��� ���⼺��\n");

	fprintf(wfp, "%s %d\n", p.name, p.age);
	fclose(wfp);

	FILE* rfp = fopen("profile.txt", "r");
	if (rfp == NULL) {
		printf("%s\n", "���Ͽ��⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "�����б� ���⼺��\n");
	Profile p1;
	while (fscanf(rfp, "%s %d", p1.name, &p1.age) != EOF) {
		printf("�̸� : %s , age : %d", p1.name, p1.age);
	}
	fclose(rfp);
	return 0;
}
