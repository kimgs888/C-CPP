#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// ���ڿ�ó�������� �����޸� �Ҵ�
int main05(){

	int len = 3;
	char temp[30];
	char* str[3];
	for (int i = 0; i < len; i++)
	{
		puts("���ڿ��� �Է��ϼ���");
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