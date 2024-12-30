#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Book.h"
#include "Magazine.h"
#include "BookManager.h"

int index = 0;
using namespace std;
void BookManager::insertBook() {

	char name[50];
	int price;
	char author[50];
	char publisher[50];
	int year;
	int month;

	cout << "1, å�Է�, 2. �����Է�" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "å�̸��� �Է��ϼ���" << endl;
		cin >> name;
		books[index]->setName(name);
		cout << "å������ �Է��ϼ���" << endl;
		cin >> price;
		books[index]->setPrice(price);
		cout << "å������ �Է��ϼ���" << endl;
		cin >> author;
		books[index]->setAuthor(author);
		cout << "���ǻ縦 �Է��ϼ���" << endl;

		cin >> publisher;
		books[index]->setPublicsher(publisher);
		index++;
	}
	else {
		// �����Է��ڵ� here
		Magazine* m = new Magazine();
		cout << "���� �̸��� �Է��ϼ���" << endl;
		cin >> name;
		m->setName(name);
		cout << "���� ������ �Է��ϼ���" << endl;
		cin >> price;
		m->setPrice(price);
		cout << "���� ���ڸ� �Է��ϼ���" << endl;
		cin >> author;
		m->setAuthor(author);
		cout << "���� ���ǻ縦 �Է��ϼ����" << endl;
		cin >> publisher;
		m->setPublicsher(publisher);
		cout << "���� �Ⱓ �⵵�� �Է��ϼ���" << endl;
		cin >> year;
		m->year = year;
		cout << "���� �Ⱓ ���� �Է��ϼ���" << endl;
		cin >> month;
		m->month = month;
		books[index] = m;
		index++;
	}

}

void BookManager::printBook() {
	int i;

	cout << "��ȣ \t å�̸� \t å���� \t å���� \t ���ǻ� \t �� \t ��" << endl;
	for (i = 0; i < index; i++) {
		cout << "[" << i + 1 << "]" << "\t";
		books[i]->printBook();
	}
}

void BookManager::updateBook() {
	int num;
	char name[50];
	int price;
	char author[50];
	char publisher[50];

	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	cout << "Ÿ��Ʋ�� �Է��ϼ���" << endl;
	cin >> name;
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> publisher;
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> author;
	cout << "������ �Է��ϼ���" << endl;
	cin >> price;


	books[num - 1]->setName(name);
	books[num - 1]->setPrice(price);
	books[num - 1]->setAuthor(author);
	books[num - 1]->setPublicsher(publisher);
}

void BookManager::deleteBook() {
	int num;
	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	if (books[num - 1] != NULL) delete books[num - 1];

	books[num - 1] = books[index - 1];

	index--;
}

void BookManager::findBook() {
	int i;
	char find[50];
	cout << "�˻��� å�̸��� �Է��ϼ���" << endl;
	cin >> find;

	for (i = 0; i < index; i++) {
		if (!strcmp(books[i]->name, find)) {
			cout << "  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ�" << endl;
			cout << i + 1 << ", " << books[i]->name << ", " <<
				books[i]->price << ", " << books[i]->author << ", "
				<< books[i]->publisher << endl;
		}
	}
}

void BookManager::freeBooks() {
	int i;
	for (i = 0; i < index; i++) {
		delete books[i];
	}
}


