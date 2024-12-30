#include <iostream>
#include <cstring>
#include "Magazine.h"

Magazine::Magazine() {
	year = 0;
	month = 0;
}
Magazine::Magazine(const char* name
	, int price
	, const char* author
	, const char* publisher
	, int year
	, int month) {
	strcpy(this->name, name);
	this->price = price;
	strcpy(this->author, author);
	strcpy(this->publisher, publisher);
	this->year = year;
	this->month = month;
}

Magazine::~Magazine() {}

void Magazine::printBook() const {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << "\t" << year << "\t" << month << endl;
}