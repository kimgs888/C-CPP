#ifndef __MAGAGINE_H__
#define __MAGAGINE_H__
#include "String.h"
#include "Book.h"
class Magazine : public Book{
private :
	int year;
	int month;
public:
	Magazine();
	Magazine(String name
		, int price
		, String author
		, String publisher
		, int year
		, int month);
	
	virtual void printBook() const;
	friend BookManager;
};

#endif