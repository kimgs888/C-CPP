#include <stdio.h>

int main03() {
	
	FILE* rfp = fopen("a.txt", "r");
	if (rfp == NULL) {
		printf("%s\n", "���Ͽ��⸦ �����߽��ϴ�\n");
		return -1;
	}
	printf("%s\n", "�����б� ���⼺��\n");
	char str[50];
	
	while (fscanf(rfp, "%s", str) != EOF) {
		printf("%s", str);
	}
	

	fclose(rfp);
	return 0;
}