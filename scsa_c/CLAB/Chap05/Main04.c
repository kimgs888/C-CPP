
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int res;
	int i = 1;   // �ʱ��
	do {
		// ���ǽ�
		res = 2 * i;
		printf("2 * %d = %d\n", i, res);
		i++; //������

	} while (i <= 9);

	return 0;
}
