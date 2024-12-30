#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mylib.h"

int index = 0;


void func(void (*fp)(Book*[]), Book* books[]) {
	fp(books);
};

void insertBook(Book** books) {
	
	books[index] = (Book*)malloc(sizeof(Book));

	printf("å�̸��� �Է��ϼ���\n");
	scanf("%s", (*books[index]).name);
	printf("å������ �Է��ϼ���\n");
	scanf("%d", &books[index]->price);
	printf("å������ �Է��ϼ���\n");
	scanf("%s", books[index]->author);
	printf("���ǻ縦 �Է��ϼ���\n");
	scanf("%s", books[index]->publisher);
	index++;

}

void printBook(Book** books) {
	int i;

	printf("  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ� \n");
	for (i = 0; i < index; i++) {
		printf("[%d] %s \t %d \t %s \t %s \n", i + 1, books[i]->name,
			books[i]->price, books[i]->author, books[i]->publisher);
	}
}

void updateBook(Book** books) {
	int i;
	char name[50];
	int price;
	char author[50];
	char publisher[50];

	printf("������ å��ȣ�� �Է��ϼ���\n");
	scanf("%d", &i);
	printf("������ å�̸��� �Է��ϼ���\n");
	scanf("%s", name);
	printf("������ å������ �Է��ϼ���\n");
	scanf("%d", &price);
	printf("������ å������ �Է��ϼ���\n");
	scanf("%s", author);
	printf("������ ���ǻ縦 �Է��ϼ���\n");
	scanf("%s", publisher);

	strcpy(books[i - 1]->name, name);
	books[i - 1]->price = price;
	strcpy(books[i - 1]->author, author);
	strcpy(books[i - 1]->publisher, publisher);
}

void deleteBook(Book** books) {
	int i;
	printf("������ å��ȣ�� �Է��ϼ���\n");
	scanf("%d", &i);

	strcpy(books[i - 1]->name, books[index - 1]->name);
	books[i - 1]->price = books[index - 1]->price;
	strcpy(books[i - 1]->author, books[index - 1]->author);
	strcpy(books[i - 1]->publisher, books[index - 1]->publisher);

	free(books[index - 1]);
	index--;

}

void findBook(Book** books) {
	int i;
	char book[50];
	printf("�˻��� å�̸��� �Է��ϼ���\n");
	scanf("%s", book);
	for (i = 0; i < index; i++) {
		if (!strcmp(books[i]->name , book)) {
			printf("  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ� \n");
			printf("[%d] %s \t %d \t %s \t %s \n", i + 1, books[i]->name,
				books[i]->price, books[i]->author, books[i]->publisher);

		}
	}

}

void bookFree(Book* books[10]) {
	int i;
	for (i = 0; i < index; i++) {
		if(books[i] != NULL)
			free(books[i]);
	}
	
}
