#include<stdio.h>
#include<stdlib.h>

int main01() {
	// ���Կ�����
	int a = 10;
	a = a + 5;
	a += 5;
	a = a - 5;
	a -= 5;
	a *= 5;
	a /= 10;
	a = a + 1;

	int b = 20;
	a = a + b;
	a += b;
	a = a - b;
	a -= b;
	a *= b;
	a /= b;

	// ������ ����
	a = a % b;

	// ��ġ ��ġ
	++a;
	++a;
	a++;
	a--;

	// ���� ���������ڴ� ���������� ���� �ȴ´�
	//++(++a);
	//(a++)++;

	a = 10;
	b = ++a;
	printf("a = %d b = %d\n", a, b);
	a = 10;
	b = a++;
	printf("a = %d b = %d\n", a, b);

	return 0;
}
