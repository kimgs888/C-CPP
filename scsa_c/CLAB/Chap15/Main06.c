#include <stdio.h>

void printArr(int (*)[]);

int main06() {
	int arr[2][3] = { {1,3,5},{7,9,11} };
	printf("%u %u\n", arr, arr[0]);
	// �������迭�� ������ �츱���� �����ϴ�
	int* p = arr;
	// �̷��ø� �ȵ˴ϴ�
	int** paa = arr;

	// �迭������
	// 2�����迭�� 1������������ �迭�����ͷ� ����ų�� �ִ�
	int (*arrp)[3] = arr;
	// �������迭�� �迭�����ͷ� �����ϸ� �������迭�� ������ �迭�����Ϳ��� Ȱ���Ҽ� �ִ�
	printf("%u %u %d %d", arr, arrp, arrp[0][0],*(*(arrp+0)+0));
	// �迭�����ʹ� ���������ͷ� �� Ȱ������ �Ƚ��ϴ�
	//int** pp = &arrp;
	printArr(arr);
	return 0;
}

void printArr(int (*arr)[3]) {
	printf("printArr sizeof = %d\n", sizeof(arr));
}