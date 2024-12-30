#include <stdio.h>

void namePrint(char** names, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", names[i]);
	}
}
int main05() {
	char arr[4][20] = { "둘리","또치","마이콜","고길동" };
	char* pa[] = { "둘리","또치","마이콜","고길동" };
	int len = sizeof(arr) / sizeof(arr[0]);
	//이중포인터 파라미터타입에는 포인터변수나 포인터배열을 인자로 넣어야 합니다
	//namePrint(arr, len);
	namePrint(pa, len);

	return 0;
}