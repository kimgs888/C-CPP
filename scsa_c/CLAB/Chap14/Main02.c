#include <stdio.h>
// 다차원 배열의 초기화
int main02() {
	int jumsu[3][4] = { {1},{3,5},{7,9,11,13} };
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%d ", jumsu[i][j]);
		}
		printf("\n");
	}
	int jumsu2[3][4] = { 1,2,3,4,5,6,7 };
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 4;j++) {
			printf("%d ", jumsu2[i][j]);
		}
		printf("\n");
	}
	return 0;
}