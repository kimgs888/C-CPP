#include <stdio.h>

int main02() {
	/*3���� �̸��� �����ϼ���*/
	// 2�����迭����
	char names[3][50];
	// ����Ʈ�迭
	char* pnames[3];
	pnames[0] = "��浿";
	pnames[1] = "�Ѹ�";
	pnames[2] = "����ȹ��ź��̿͵η��";

	for (int i = 0;i < 3;i++) {
		printf("%s\n", pnames[i]);
	}
} 