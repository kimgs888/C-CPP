#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// fgets, fputs
// 복사프로그램
int main07() {
	FILE * fin, * fout;

	fin = fopen("b.txt", "rb");
	if (fin == NULL) return -1;

	fout = fopen("copy.txt", "wb");
	if (fout == NULL) return -1;
	char str[50];
	while (fgets(str, sizeof(str), fin) != NULL) {
		str[strlen(str)] = '\0';
		fputs(str, fout);
	}

	printf("복사가 완료되었습니다\n");
	return 0;
}