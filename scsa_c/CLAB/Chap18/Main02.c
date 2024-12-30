#include <stdio.h>

int main02() {
	FILE* wfp = fopen("a.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "파일쓰기 모드로 열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일쓰기 열기성공\n");

	fprintf(wfp, "%s", "파일에 문자열을 씁니다\n 다음라인에 문자열을 씁니다");

	fclose(wfp);


}