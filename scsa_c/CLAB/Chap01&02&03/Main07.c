#include <stdio.h>
#include <string.h>
/*
	배열
		정의 : 같은데이타타입변수의 순서적 나열
		특징 : 선언과통시에 크기가 결정되어야 하고 크기변경이 불가하다
			   배열의 이름은 첫번째주소를 의미한다
*/
int main() {
	char str[30] = "scsa";
	str[0] = 's';
	str[1] = 'c';
	str[2] = 's';
	str[3] = 'a';

	//char str2[30] = str;
	char str2[30];
	strcpy(str2, str);
	printf("%s", str2);



	return 0;
}