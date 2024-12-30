#include <stdio.h>
#include <string.h>
/*
	문자열 관련함수
*/
int main() {
	char str1[] = "둘리";
	char str2[] = { 'd','u','l','r','i','\0'};
	char str3[20];

	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strcmp(str1,str2));  // 같으면 0, -1, 1
	printf("%s\n", strcpy(str3, str2)); // 문자열이 리턴된다
	printf("%s\n", strcat(str3, "hi")); // 문자열이 리턴된다
	// puts(str3);
	printf("%u\n", strchr(str3, 'u')); // 주소가 리턴된다
	return 0;
}

