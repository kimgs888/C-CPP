#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 문자열처리에서의 동적메모리 할당
int main05(){

	int len = 3;
	char temp[30];
	char* str[3];
	for (int i = 0; i < len; i++)
	{
		puts("문자열을 입력하세요");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i] , temp);
	}
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", str[i]);
	}

	for(int i=0;i<3;i++){
		free(str[i]);
	}
	return 0;
}