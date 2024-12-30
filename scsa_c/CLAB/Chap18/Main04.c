#include <stdio.h>
#include <string.h>
#include "profile.h"
int main04() {
	Profile p = { "둘리" ,7 };

	FILE* wfp = fopen("profile.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "파일쓰기 모드로 열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일쓰기 열기성공\n");

	fprintf(wfp, "%s %d\n", p.name, p.age);
	fclose(wfp);

	FILE* rfp = fopen("profile.txt", "r");
	if (rfp == NULL) {
		printf("%s\n", "파일열기를 실패했습니다\n");
		return -1;
	}
	printf("%s\n", "파일읽기 열기성공\n");
	Profile p1;
	while (fscanf(rfp, "%s %d", p1.name, &p1.age) != EOF) {
		printf("이름 : %s , age : %d", p1.name, p1.age);
	}
	fclose(rfp);
	return 0;
}
