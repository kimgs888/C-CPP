#include <stdio.h>
/*
	const char*p ���ڴ� ������ڿ��� �迭 ��� ����������
	char*q ���ڴ� �迭�� ���ڷ� �־�� �Ѵ�
*/
void print(const char* p, char* q) {
	// const �� ���� �ٲܼ� ����
	//p[0] = 'a';
	// �����ϳ� �迭�� ����� ���ڸ� �־��־�� �Ѵ�
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