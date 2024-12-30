

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

	cout << "1, 책입력, 2. 잡지입력" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "책이름을 입력하세요" << endl;
		cin >> name;
		books[index]->name = name;
		cout << "책가격을 입력하세요" << endl;
		cin >> price;
		books[index]->price = price;
		cout << "책저자을 입력하세요" << endl;
		cin >> author;
		books[index]->author = author;
		cout << "출판사를 입력하세요" << endl;
		cin >> publisher;
		books[index]->publisher = publisher;
		index++;
	}
	else {
		// 잡지입력코드 here
		// 잡지입력코드 here
		Magazine* m = new Magazine();
		cout << "잡지 이름을 입력하세요" << endl;
		cin >> name;
		m->name = name;
		cout << "잡지 가격을 입력하세요" << endl;
		cin >> price;
		m->price = price;
		cout << "잡지 저자를 입력하세요" << endl;
		cin >> author;
		m->author = author;
		cout << "잡지 출판사를 입력하세요요" << endl;
		cin >> publisher;
		m->publisher = publisher;
		cout << "잡지 출간 년도를 입력하세요" << endl;
		cin >> year;
		m->year = year;
		cout << "잡지 출간 월을 입력하세요" << endl;
		cin >> month;
		m->month = month;
		books[index] = m;
		index++;
	}

}

void BookManager::printBook() {
	int i;

	cout << "번호 \t 책이름 \t 책가격 \t 책저자 \t 출판사 \t 년 \t 월" << endl;
	for (i = 0; i < index; i++) {
		cout << "[" << i + 1 << "]" << "\t";
		books[i]->printBook();
	}
}
void BookManager::findBook() {
	int i;
	char find[50];
	cout << "검색할 책이름을 입력하세요" << endl;
	cin >> find;

	for (i = 0; i < index; i++) {
		if (books[i]->name == find) {
			cout << "  책이름 \t\t 책가격 \t\t 책저자 \t\t 출판사" << endl;
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

	cout << "수정할 책번호를 입력하세요" << endl;
	cin >> num;
	
	cout << "이름을 입력하세요" << endl;
	cin >> name;
	cout << "출판사를 입력하세요" << endl;
	cin >> publisher;
	cout << "저자를 입력하세요" << endl;
	cin >> author;
	cout << "가격을 입력하세요" << endl;
	cin >> price;
	Magazine* m = dynamic_cast<Magazine*>(books[num - 1]);
	if (m == nullptr) {
		delete books[num - 1];
		books[num - 1] = new Book;
	}
	else {
		Magazine* update = new Magazine;
		cout << "잡지 출간 년도를 입력하세요" << endl;
		cin >> year;
		update->year = year;
		cout << "잡지 출간 월을 입력하세요" << endl;
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
	cout << "삭제할 책번호을 입력하세요" << endl;
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

