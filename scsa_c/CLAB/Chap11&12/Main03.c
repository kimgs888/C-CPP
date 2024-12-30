#include <stdio.h>
/*
	const char*p 인자는 상수문자열과 배열 모두 가능하지만
	char*q 인자는 배열만 인자로 넣어야 한다
*/
void print(const char* p, char* q) {
	// const 는 값을 바꿀수 없다
	//p[0] = 'a';
	// 가능하나 배열로 선언된 인자를 넣어주어야 한다
	q[0] = 'a';
	printf("%s\n", p);
}


int main03() {
	char* a = "apple";
	char b[10] = "banana";
	printf("%s\n", a);
	//a[1] = 'h';
	print(a,b);
	return 0;
}