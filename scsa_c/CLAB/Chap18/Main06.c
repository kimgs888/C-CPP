#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main06() {
	FILE* fp = fopen("b.txt", "w+");
	if (fp == NULL) return -1;

	fprintf(fp, "%s %d", "둘리", 9);
	
	/*
		SEEK_SET : 시작점
		SEEK_CUR : 현재포인터지점
		SEEK_END : 파일의 끝
	*/
	fseek(fp, 0, SEEK_SET);

	char name[20];
	int age = 0;
	//FILE* fp = fopen("b.txt", "r+");
	fscanf(fp, "%s %d", name, &age);


	printf("%s %d", name, age);

	fclose(fp);
	return 0;
}
