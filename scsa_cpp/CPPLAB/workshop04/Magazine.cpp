#include <iostream>
#include <cString>
#include "Magazine.h"


Magazine::Magazine() {
	year = 0;
	month = 0;
}
Magazine::Magazine(String name,int price,String author,String publisher,int year,int month)
:Book(name,price,author,publisher),year(year),month(month){}

void Magazine::printBook() const {
	cout << name << "\t" << price << "\t" << author << "\t"
		<< publisher << "\t" << year << "\t" << month << endl;
}