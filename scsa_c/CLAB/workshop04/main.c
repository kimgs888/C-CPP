
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mylib.h"
int N = 1;
extern int index;
int main() {
	Book* books[10];
	int menu = 0;

	while (1) {
		printf("1:���, 2:������˻�, 3:�Է�, 4:����, 5:����, 0:����\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			func(printBook, books);
			break;
		case 2:
			func(findBook, books);
			break;
		case 3:
			/*if (index == N) {
				books = realloc(books, sizeof(Book*) * N * 2);
				if (books == NULL) {
					printf("�޸� �Ҵ� ����\n");
					exit(0);
				}
				N *= 2;
			}*/
			func(insertBook, books);
			break;
		case 4:
			func(updateBook, books);
			break;
		case 5:
			func(deleteBook, books);
			break;
		case 0:
			func(bookFree, books);
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			exit(0);
		default:
			break;
		}
	}
	free(books);
	return 0;
}
