#include <stdio.h>

int main02() {
	int i = 0;
	int jumsu[3];
	printf("3개 과목의 점수를 입력하세요\n");
	
	/*scanf("%d %d %d", &jumsu[0], &jumsu[1], &jumsu[2]);
	
	for (i = 0;i < 3;i++) {
		printf("%d ", jumsu[i]);
	}*/
	char name[20];

	printf("이름을 입력하세요\n");
	
	scanf("%s", name);

	for (i = 0;i < 20;i++) {
		printf("%c ", name[i]);
	}
	printf("\n");

	name[2] = '\0';
	printf("%s", name);
	

	return 0;
}