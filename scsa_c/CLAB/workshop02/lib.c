int index = 0;

void insertBook(char (*name)[50], int* price) {
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

void func(void (*fp)(char (*)[50], int*), char (*name)[50], int* price) {
	fp(name, price);
};