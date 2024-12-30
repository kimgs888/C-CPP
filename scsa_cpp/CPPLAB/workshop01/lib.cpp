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
	cout << "이름을 입력하세요" << endl;
	cin >> name;
	b->setName(name);
	cout << "출판사를 입력하세요" << endl;
	cin >> publisher;
	b->setPublisher(publisher);
	cout << "저자를 입력하세요" << endl;
	cin >> author;
	b->setAuthor(author);
	cout << "가격을 입력하세요" << endl;
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
	cout << "수정하시려는 번호를 입력하세요" << endl;
	cin >> num;
	Book* b = new Book;
	cout << "이름을 입력하세요" << endl;
	cin >> name;
	b->setName(name);
	cout << "출판사를 입력하세요" << endl;
	cin >> publisher;
	b->setPublisher(publisher);
	cout << "저자를 입력하세요" << endl;
	cin >> author;
	b->setAuthor(author);
	cout << "가격을 입력하세요" << endl;
	cin >> price;
	b->setPrice(price);
	if (books[num - 1] != NULL) delete books[num - 1];
	books[num - 1] = b;
};
void deleteBook(Book** books) {
	int num;
	cout << "삭제하시려는 번호를 입력하세요" << endl;
	cin >> num;

	if (books[num - 1] != NULL) delete books[num - 1];
	books[num - 1] = books[index - 1];
	index--;
};
void findBook(Book** books) {
	char name[50 + 1];
	cout << "검색하시려는 책의 이름을 입력하세요" << endl;
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
