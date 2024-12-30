#include <stdio.h>

int main02() {
	/*3명의 이름을 저장하세요*/
	// 2차원배열선언
	char names[3][50];
	// 포인트배열
	char* pnames[3];
	pnames[0] = "고길동";
	pnames[1] = "둘리";
	pnames[2] = "김수안무거북이와두루미";

	for (int i = 0;i < 3;i++) {
		printf("%s\n", pnames[i]);
	}
} 