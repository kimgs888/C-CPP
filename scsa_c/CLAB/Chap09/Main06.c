#include <stdio.h>

int main06() {
	printf("%u %u %c %c %c\n", "apple", "apple"+1, *"apple","apple"[1],*("apple"+1));

	//char name[10] = {'a','p','p','l' ,'e' };
	char name[10+1] = "apple";
	name[3] = 'T';
	printf("%s\n", name);
	// pa 와 pb 는 같은 문자열을 가르킨다
	char* pa = "apple";
	char* pb = "apple";
	// 상수 문자열의 경우 변경이 불가하다
	/*pa[3] = 'T';
	printf("%s\n", pa);*/
	printf("%u %u\n", pa, pb);
	return 0;
}