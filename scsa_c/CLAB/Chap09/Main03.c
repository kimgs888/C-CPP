#include <stdio.h>

int main03() {
	int arr[] = { 1,3,5 };

	printf("%d %d %d %d\n", *(arr+0),arr[0], *(arr + 1), arr[1]);
	int* pa = arr+1;
	printf("%d %d %d %d\n", *(pa + 0), pa[0], *(pa + 1), pa[1]);
	// �迭�� �ּҰ��� �����Ҽ� ����
	//arr = arr + 1;
	// ����Ʈ������ ���� �����Ҽ� �ִ�
	pa = pa + 1;
	printf("%d\n", pa[0]);
	// ����Ʈ������ ǥ��������� ��ȯ�غ���
	pa = arr;
	arr[2] = arr[0] + arr[1];
	pa[2] = pa[0] + pa[1];
	*(pa + 2) = *(pa+0) + *(pa + 1);

	return  0;
}