#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// �ڱ����� ����ü
typedef struct node {
	struct node* next;
	int data;
	// ���� �߰��� ����Ÿ�� ����ü�� ����� �߰��ϼ���
	// code here
} Node;

void appendFirst(Node* list, int newData) {
	Node* newNode = malloc(sizeof(Node));
	newNode->next = list->next;
	newNode->data = newData;

	list->next = newNode;
}

void showList(Node* list) {
	Node* cur = list->next;
	if (cur == NULL) {
		printf("����� ����Ÿ�� �����ϴ�\n");
		return;
	}

	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

int getListLength(Node* list) {
	Node* cur = list;
	int count = -1;
	while (cur != NULL) {
		cur = cur->next;
		count++;
	}
	return count;
}

void append(Node* list, int newData) {
	Node* cur = list;
	// cur �ǳ��̷� �̵�
	while (cur->next != NULL) {
		cur = cur->next;
	}
	Node* newNode = malloc(sizeof(Node));
	newNode->data = newData;
	newNode->next = NULL;

	cur->next = newNode;
}

void deleteList(Node* list) {
	Node* cur = list->next;
	Node* next;
	while (cur != NULL) {
		next = cur->next;
		free(cur);
		cur = next;
	}
	list->next = NULL;
}

void insert(Node* list, int pos, int newData) {
	Node* cur = list;
	// �߰��� ��常���
	Node* newNode = malloc(sizeof(Node));
	newNode->data = newData;
	newNode->next = NULL;

	// 0���� �߰��ϴ� ���
	if (pos == 0) {
		newNode->next = list->next;
		list->next = newNode;
	}
	else { // 0 �� �ƴѰ��
		int count = 0;
		while (count != pos) {
			// ������ ��ġ�� ã����
			if (count == (pos - 1)) {
				newNode->next = cur->next;
				cur->next = newNode;
			}

			cur = cur->next;
			count++;
		}
	}
}


void deleteData(Node* list, int data) {
	Node* cur = list;
	// data ã��
	Node* pre = NULL;
	while (cur != NULL) {
		if (cur->data == data) {
			pre->next = cur->next;
			free(cur);
			return;
		}
		pre = cur;
		cur = cur->next;
	}

}

int searchList(Node* list, int data) {
	Node* cur = list;
	int pos = 0;
	while (cur != NULL) {
		// ����Ÿ�� ã���� pos �� �����Ѵ�
		if (cur->data == data) {
			return pos;
		}
		cur = cur->next;
		pos++;
	}
	printf("����Ÿ�� ã�� ���߽��ϴ� 0�� �����մϴ�\n");
	return pos;
}

Node* makeList() {
	Node* list = malloc(sizeof(Node));
	list->next = NULL;
	return list;
}

int main08() {
	printf("�⺻����Ÿ �����\n");
	Node* list = makeList();

	for (int i = 1; i <= 5;i++) {
		append(list, i);
	}
	showList(list);

	insert(list, 3, 2024);
	showList(list);

	printf("2024 �� �������� : %d\n", searchList(list, 2024));

	return 0;
}