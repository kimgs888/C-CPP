#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main06() {
	FILE* fp = fopen("b.txt", "w+");
	if (fp == NULL) return -1;

	fprintf(fp, "%s %d", "�Ѹ�", 9);
	
	/*
		SEEK_SET : ������
		SEEK_CUR : ��������������
		SEEK_END : ������ ��
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
