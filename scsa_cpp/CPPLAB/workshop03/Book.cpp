#include <iostream>
#include <cstring>

#include "Book.h"

Book::Book() {};
Book::Book(const char* name, int price
	, const char* author, const char* publisher) :price(price) {
	strcpy(this->name, name);
	strcpy(this->author, author);
	strcpy(this->publisher, publisher);
}
Book::Book(const Book& ref) :price(ref.price) {
	strcpy(this->name, ref.name);
	strcpy(this->publisher, ref.publisher);
	strcpy(this->author, ref.author);
};

Book::~Book() {
	
}
void Book::setAuthor(char* author) {
	strcpy(this->author, author);
}

void Book::setName(char* name) {
	strcpy(this->name, name);
}

void Book::setPrice(int price) {
	this->price = price;
}
void Book::setPublicsher(char* publisher) {
	strcpy(this->publisher, publisher);
}

void Book::printBook() const {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << endl;
}

