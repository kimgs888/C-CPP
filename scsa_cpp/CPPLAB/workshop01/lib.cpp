#include <iostream>
#include <cstring>
#include "Book.h"
#include "lib.h"

int index = 0;
void printBook(Book** books) {
	for (int i = 0; i < index; i++)
	{
		cout << "[" << i + 1 << "]" << "\t";
		books[i]->print();
	}
};

void insertBook(Book** books) {
	Book* b = new Book;
	char name[30];
	char publisher[30];
	char author[30];
	int price;
	cout << "�̸��� �Է��ϼ���" << endl;
	cin >> name;
	b->setName(name);
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> publisher;
	b->setPublisher(publisher);
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> author;
	b->setAuthor(author);
	cout << "������ �Է��ϼ���" << endl;
	cin >> price;
	b->setPrice(price);
	books[index] = b;
	index++;
};
void updateBook(Book** books) {
	int num;
	char name[30];
	char publisher[30];
	char author[30];
	int price;
	cout << "�����Ͻ÷��� ��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	Book* b = new Book;
	cout << "�̸��� �Է��ϼ���" << endl;
	cin >> name;
	b->setName(name);
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> publisher;
	b->setPublisher(publisher);
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> author;
	b->setAuthor(author);
	cout << "������ �Է��ϼ���" << endl;
	cin >> price;
	b->setPrice(price);
	if (books[num - 1] != NULL) delete books[num - 1];
	books[num - 1] = b;
};
void deleteBook(Book** books) {
	int num;
	cout << "�����Ͻ÷��� ��ȣ�� �Է��ϼ���" << endl;
	cin >> num;

	if (books[num - 1] != NULL) delete books[num - 1];
	books[num - 1] = books[index - 1];
	index--;
};
void findBook(Book** books) {
	char name[50 + 1];
	cout << "�˻��Ͻ÷��� å�� �̸��� �Է��ϼ���" << endl;
	cin >> name;
	for (int i = 0; i < index; i++)
	{
		if (!strcmp(books[i]->getName(), name)) {
			cout << "name \t publisher \t author \t price" << endl;
			books[i]->print();
			break;
		}
	}
};
