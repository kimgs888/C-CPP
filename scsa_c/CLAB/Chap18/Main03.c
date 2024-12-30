#include <stdio.h>

int main03() {
	
	FILE* rfp = fopen("a.txt", "r");
	if (rfp == NULL) {
		printf("%s\n", "파일열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일읽기 열기성공\n");
	char str[50];
	
	while (fscanf(rfp, "%s", str) != EOF) {
		printf("%s", str);
	}
	

	fclose(rfp);
	return 0;
}