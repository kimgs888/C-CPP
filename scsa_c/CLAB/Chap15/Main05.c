#include <stdio.h>

void namePrint(char** names, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", names[i]);
	}
}
int main05() {
	char arr[4][20] = { "�Ѹ�","��ġ","������","��浿" };
	char* pa[] = { "�Ѹ�","��ġ","������","��浿" };
	int len = sizeof(arr) / sizeof(arr[0]);
	//���������� �Ķ����Ÿ�Կ��� �����ͺ����� �����͹迭�� ���ڷ� �־�� �մϴ�
	//namePrint(arr, len);
	namePrint(pa, len);

	return 0;
}