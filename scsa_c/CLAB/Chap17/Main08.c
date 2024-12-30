#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 자기참조 구조체
typedef struct node {
	struct node* next;
	int data;
	// 이후 추가할 데이타를 구조체로 만들어 추가하세요
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
		printf("출력할 데이타가 없습니다\n");
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
	// cur 맨끝이로 이동
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
	// 추가할 노드만들기
	Node* newNode = malloc(sizeof(Node));
	newNode->data = newData;
	newNode->next = NULL;

	// 0번에 추가하는 경우
	if (pos == 0) {
		newNode->next = list->next;
		list->next = newNode;
	}
	else { // 0 이 아닌경우
		int count = 0;
		while (count != pos) {
			// 삽입할 위치를 찾으면
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
	// data 찾기
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
		// 데이타를 찾으면 pos 를 리턴한다
		if (cur->data == data) {
			return pos;
		}
		cur = cur->next;
		pos++;
	}
	printf("데이타를 찾지 못했습니다 0을 리턴합니다\n");
	return pos;
}

Node* makeList() {
	Node* list = malloc(sizeof(Node));
	list->next = NULL;
	return list;
}

int main08() {
	printf("기본데이타 만들기\n");
	Node* list = makeList();

	for (int i = 1; i <= 5;i++) {
		append(list, i);
	}
	showList(list);

	insert(list, 3, 2024);
	showList(list);

	printf("2024 의 포지션은 : %d\n", searchList(list, 2024));

	return 0;
}