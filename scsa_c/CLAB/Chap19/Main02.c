#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.141592
#define LIMIT 100
#define MSG "passed"
#define ERR_PRINT printf("ũ�Ⱑ �ʹ� Ů�ϴ� %d ���� ���� ���� ��������\n",LIMIT)

int main02() {
	double radius, area;
	printf("���������� �Է��ϼ���\n");
	scanf("%lf", &radius);
	area = radius * radius * PI;

	if (radius > LIMIT) ERR_PRINT;
	else printf("���� ������ %.2lf (%s)\n", area, MSG);

	return 0;
}