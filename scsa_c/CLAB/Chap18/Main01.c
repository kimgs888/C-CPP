#include <stdio.h>

int main01(){
	FILE* wfp = fopen("a.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "���Ͼ��� ���� ���⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "���Ͼ��� ���⼺��\n");
	fclose(wfp);

	FILE* rfp = fopen("a.txt","r");
	if (rfp == NULL) {
		printf("%s\n", "���Ͽ��⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "�����б� ���⼺��\n");

	fclose(rfp);
	return 0;
}