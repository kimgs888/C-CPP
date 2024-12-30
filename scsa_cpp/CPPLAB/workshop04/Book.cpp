#include <iostream>
#include <cstring>
#include "Book.h"

Book::Book() {};
Book::Book(String name,int price,String author,String publisher)
	:name(name),price(price),author(author),publisher(publisher) {}
Book::~Book() {}
void Book::printBook() const {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << endl;
}

