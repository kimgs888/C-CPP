#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profile.h"
int main05() {
	
	FILE* wfp = fopen("profile.txt", "w");
	if (wfp == NULL) {
		printf("%s\n", "파일쓰기 모드로 열기를 실패했습니다\n");
		return -1;
	}

	int cnt = 0;

	printf("입력하실 갯수를 입력하세요\n");
	scanf("%d", &cnt);

	Profile* parr = (Profile*)malloc(sizeof(Profile) * cnt);

	for (int i = 0; i < cnt; i++)
	{
		printf("이름을 입력하세요\n");
		scanf("%s", (parr + i)->name);
		printf("나이를 입력하세요\n");
		scanf("%d", &(parr + i)->age);
	}

	for (int i = 0; i < cnt; i++)
	{
		printf("이름 : %s, 나이 : %d\n", (parr + i)->name, (parr + i)->age);
		fprintf(wfp, "%s %d\n", (parr + i)->name, (parr + i)->age);
	}
	free(parr);
	fclose(wfp);
	
	return 0;
}



