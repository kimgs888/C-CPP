#include <iostream>
#include <cstring>
#include "Book.h"

Book::Book() { };
Book::Book(char* name, char* publisher, char* author, int price) :price(price) {
	strcpy(this->name, name);
	strcpy(this->publisher, publisher);
	strcpy(this->author, author);
}
Book::~Book() {}
void Book::setName(char* name) {
	cout << "name" << endl;
	strcpy(this->name, name);
}
char* Book::getName() {
	return name;
}
void Book::setPublisher(char* publisher) {
	strcpy(this->publisher, publisher);
}
char* Book::getPublisher() {
	return publisher;
}
void Book::setAuthor(char* author) {
	strcpy(this->author, author);
}
char* Book::getAuthor() {
	return author;
}
void Book::setPrice(int price) {
	this->price = price;
};
int Book::getPrice() {
	return this->price;
};

void Book::print() {
	cout << this->name << "," << this->publisher << "," << this->author << "," << this->price << endl;
}