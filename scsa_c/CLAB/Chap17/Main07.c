#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	자기참조구조체
*/
typedef struct letter {
	// content
	char text;
	// meta data
	int size;
	int color;
} Letter;

typedef struct node1{
	int num;
	Letter* t;
	Letter* next;
	
} Node1;

int main07() {
	Node1 a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	a.t = (Letter*)malloc(sizeof(Letter));
	b.t = (Letter*)malloc(sizeof(Letter));
	c.t = (Letter*)malloc(sizeof(Letter));

	a.t->text = 'h';
	b.t->text = 'i';
	c.t->text = '!';

	Node1* cur = &a;
	a.next = &b;
	b.next = &c;

	while (cur != NULL) {
		printf("%c ", cur->t->text);
		cur = cur->next;
	}


	return 0;
}