#include <stdio.h>

int main02() {
	FILE* wfp = fopen("a.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "���Ͼ��� ���� ���⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "���Ͼ��� ���⼺��\n");

	fprintf(wfp, "%s", "���Ͽ� ���ڿ��� ���ϴ�\n �������ο� ���ڿ��� ���ϴ�");

	fclose(wfp);


}