#include <stdio.h>
#include <string.h>
/*
	���ڿ� �����Լ�
*/
int main() {
	char str1[] = "�Ѹ�";
	char str2[] = { 'd','u','l','r','i','\0'};
	char str3[20];

	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strcmp(str1,str2));  // ������ 0, -1, 1
	printf("%s\n", strcpy(str3, str2)); // ���ڿ��� ���ϵȴ�
	printf("%s\n", strcat(str3, "hi")); // ���ڿ��� ���ϵȴ�
	// puts(str3);
	printf("%u\n", strchr(str3, 'u')); // �ּҰ� ���ϵȴ�
	return 0;
}

