#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main04() {
	printf("��¥ : %s , �ð� : %s\n", __DATE__, __TIME__);
	printf("���� : %s , �Լ� : %s, ���� : %d \n"
		, __FILE__, __FUNCTION__, __LINE__);
	return 0;
}