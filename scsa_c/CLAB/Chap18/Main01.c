#include <stdio.h>

int main01(){
	FILE* wfp = fopen("a.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "파일쓰기 모드로 열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일쓰기 열기성공\n");
	fclose(wfp);

	FILE* rfp = fopen("a.txt","r");
	if (rfp == NULL) {
		printf("%s\n", "파일열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일읽기 열기성공\n");

	fclose(rfp);
	return 0;
}