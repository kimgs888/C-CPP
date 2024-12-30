#include <stdio.h>

int main01() {
	int jumsu[2][3] = { {90,80,100},{30,23,80} };
	
	printf("%d %d %d\n", sizeof(jumsu), sizeof(jumsu[0]), sizeof(jumsu[0][0]));

	int R = sizeof(jumsu) / sizeof(jumsu[0]);
	int C = sizeof(jumsu[0]) / sizeof(jumsu[0][0]);

	for (int i = 0;i < R;i++) {
		for (int j = 0;j < C;j++) {
			printf("%d ", jumsu[i][j]);
		}
		printf("\n");
	}

	int* p = jumsu;
	printf("%d %d\n", *p, *(p + 1));
	printf("%d %d\n", jumsu, **(jumsu+1));


	return 0;
}