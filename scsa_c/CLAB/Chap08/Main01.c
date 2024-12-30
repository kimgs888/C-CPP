#include <stdio.h>

/*
	배열
		정의 : 같은데이타 타입의 순서적 나열
		특성 : 선언과 동시에 크기가 선언되어져야 하고 크기 변경이 불가하다
		주의 : c의 배열은 객체가 아니고 자료형이다
*/
int main01() {
	int arr[5] = {0,0,0};
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	arr[2] = arr[0] + arr[1];

	//scanf("%d", &arr[2]);

	printf("%u\n", arr[0]);

	char str[10] = { 'a','p','p' ,'l','e'};
	printf("%c\n", str[0]);

	return 0;
}