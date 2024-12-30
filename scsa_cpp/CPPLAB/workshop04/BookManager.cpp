

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include "Book.h"
#include "Magazine.h"
#include "BookManager.h"
int index = 0;
using namespace std;
void BookManager::insertBook() {

	String name;
	int price;
	String author;
	String publisher;
	int year;
	int month;

	cout << "1, å�Է�, 2. �����Է�" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "å�̸��� �Է��ϼ���" << endl;
		cin >> name;
		books[index]->name = name;
		cout << "å������ �Է��ϼ���" << endl;
		cin >> price;
		books[index]->price = price;
		cout << "å������ �Է��ϼ���" << endl;
		cin >> author;
		books[index]->author = author;
		cout << "���ǻ縦 �Է��ϼ���" << endl;
		cin >> publisher;
		books[index]->publisher = publisher;
		index++;
	}
	else {
		// �����Է��ڵ� here
		// �����Է��ڵ� here
		Magazine* m = new Magazine();
		cout << "���� �̸��� �Է��ϼ���" << endl;
		cin >> name;
		m->name = name;
		cout << "���� ������ �Է��ϼ���" << endl;
		cin >> price;
		m->price = price;
		cout << "���� ���ڸ� �Է��ϼ���" << endl;
		cin >> author;
		m->author = author;
		cout << "���� ���ǻ縦 �Է��ϼ����" << endl;
		cin >> publisher;
		m->publisher = publisher;
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
void BookManager::findBook() {
	int i;
	char find[50];
	cout << "�˻��� å�̸��� �Է��ϼ���" << endl;
	cin >> find;

	for (i = 0; i < index; i++) {
		if (books[i]->name == find) {
			cout << "  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ�" << endl;
			cout << "[" << i + 1 << "]";
			books[i]->printBook();
		}
	}
}

void BookManager::updateBook() {
	int num;
	String name;
	int price;
	String author;
	String publisher;
	int year;
	int month;

	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	
	cout << "�̸��� �Է��ϼ���" << endl;
	cin >> name;
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> publisher;
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> author;
	cout << "������ �Է��ϼ���" << endl;
	cin >> price;
	Magazine* m = dynamic_cast<Magazine*>(books[num - 1]);
	if (m == nullptr) {
		delete books[num - 1];
		books[num - 1] = new Book;
	}
	else {
		Magazine* update = new Magazine;
		cout << "���� �Ⱓ �⵵�� �Է��ϼ���" << endl;
		cin >> year;
		update->year = year;
		cout << "���� �Ⱓ ���� �Է��ϼ���" << endl;
		cin >> month;
		update->month = month;
		
		delete books[num - 1];
		books[num - 1] = update;
	}

	books[num - 1]->name = name;
	books[num - 1]->price = price;
	books[num - 1]->author = author;
	books[num - 1]->publisher = publisher;
}

void BookManager::deleteBook() {
	int num;
	cout << "������ å��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	
	if (books[num - 1] != NULL) delete books[num - 1];
	books[num - 1] = books[index - 1];
	index--;
}

void BookManager::freeBooks() {
	
	for (int i = 0; i < index; i++) {
		delete books[i];
	}
}

