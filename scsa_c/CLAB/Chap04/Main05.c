#include <stdio.h>

int main() {
	int c = 0;		// 0000
	int flag = 1;	// 0001

	// bit �ڸ��ٲٱ�
				
	c = c | (flag << 2);	//		0100
							// or	0000   
							//      0100	
	c = 5;		// 0101
	flag = 1 << 1;
	if ((c & flag)>0) {
		printf("1 << 1 �ڸ����� ���� 1�Դϴ�");
	}
	else {
		printf("1 << 1 �ڸ����� ���� 0�Դϴ�");
	}
	return 0;
}