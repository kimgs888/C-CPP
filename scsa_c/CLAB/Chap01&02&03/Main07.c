#include <stdio.h>
#include <string.h>
/*
	�迭
		���� : ��������ŸŸ�Ժ����� ������ ����
		Ư¡ : �������ÿ� ũ�Ⱑ �����Ǿ�� �ϰ� ũ�⺯���� �Ұ��ϴ�
			   �迭�� �̸��� ù��°�ּҸ� �ǹ��Ѵ�
*/
int main() {
	char str[30] = "scsa";
	str[0] = 's';
	str[1] = 'c';
	str[2] = 's';
	str[3] = 'a';

	//char str2[30] = str;
	char str2[30];
	strcpy(str2, str);
	printf("%s", str2);



	return 0;
}