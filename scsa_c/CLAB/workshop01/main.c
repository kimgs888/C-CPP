
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int index = 0;

void insertBook(char name[10][50], int price[10]) {
	printf("å�̸��� �Է��ϼ���\n");
	scanf("%s", name[index]);
	printf("å������ �Է��ϼ���\n");
	scanf("%d", &price[index]);
	index++;
}

void printBook(char name[10][50], int price[10]) {
	int i;

	printf("  å�̸� \t\t å����\n");
	for (i = 0; i < index; i++) {
		printf("[%d] %s \t %d \n", i + 1, *(name + i), price[i]);
	}
}

void updateBook(char name[10][50], int price[10]) {
	int i;
	char book[50];
	int _price = 0;
	printf("������ å��ȣ�� �Է��ϼ���\n");
	scanf("%d", &i);
	printf("������ å�̸��� �Է��ϼ���\n");
	scanf("%s", book);
	printf("������ å������ �Է��ϼ���\n");
	scanf("%d", &price);
	//name[i - 1] = book;

	strcpy(name[i - 1], book);
	price[i - 1] = _price;

}

void deleteBook(char name[10][50], int price[10]) {
	int i;
	printf("������ å��ȣ�� �Է��ϼ���\n");
	scanf("%d", &i);

	strcpy(name[i - 1], name[index - 1]);
	price[i - 1] = price[index - 1];
	index--;

}

void findBook(char name[10][50], int price[10]) {
	int i;
	char book[50];
	printf("�˻��� å�̸��� �Է��ϼ���\n");
	scanf("%s", book);
	for (i = 0; i < index; i++) {
		if (!strcmp(name[i], book)) {
			printf("  å�̸� \t\t å����\n");
			printf("[%d] %s \t %d \n", i + 1, name[i], price[i]);
		}
	}
}

int main() {

	char name[10][50];
	int price[10];
	int menu = 0;


	while (1) {
		printf("1:���, 2:������˻�, 3:�Է�, 4:����, 5:����, 0:����\n");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			printBook(name, price);
			break;
		case 2:
			findBook(name, price);
			break;
		case 3:
			insertBook(name, price);
			break;
		case 4:
			updateBook(name, price);
			break;
		case 5:
			deleteBook(name, price);
			break;
		case 0:
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			exit(0);
		default:
			break;
		}
	}
	return 0;
}
