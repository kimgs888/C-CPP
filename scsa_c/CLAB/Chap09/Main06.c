#include <stdio.h>

int main06() {
	printf("%u %u %c %c %c\n", "apple", "apple"+1, *"apple","apple"[1],*("apple"+1));

	//char name[10] = {'a','p','p','l' ,'e' };
	char name[10+1] = "apple";
	name[3] = 'T';
	printf("%s\n", name);
	// pa �� pb �� ���� ���ڿ��� ����Ų��
	char* pa = "apple";
	char* pb = "apple";
	// ��� ���ڿ��� ��� ������ �Ұ��ϴ�
	/*pa[3] = 'T';
	printf("%s\n", pa);*/
	printf("%u %u\n", pa, pb);
	return 0;
}