

#include<stdio.h>
#include<stdlib.h>
// ���迬����

int main02() {
	int a = 10, b = 20, res;
	res = a > b;
	// ������ 0 , 0 �� �ƴϸ� ��(1)
	printf("%d\n", res);

	printf("%d\n", a >= b);
	printf("%d\n", a < b);
	printf("%d\n", a <= b);
	printf("%d\n", a == b);
	printf("%d\n", a != b);
	printf("----------------------\n");
	//�� ������
	// && || !
	printf("%d\n", (a > 9) && (b > 19));
	printf("%d\n", (a < 9) && (b > 19));
	printf("%d\n", (a < 9) || (b > 19));
	printf("%d\n", (a < 9) || (b < 19));
	printf("%d\n", !(a < 9));

	return 0;
}
