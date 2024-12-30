#ifndef __MAGAGINE_H__
#define __MAGAGINE_H__

#include "Book.h"
class Magazine : public Book {
private:
	int year;
	int month;
public:
	Magazine();
	Magazine(const char* name
		, int price
		, const char* author
		, const char* publisher
		, int year
		, int month);
	virtual ~Magazine();
	virtual void printBook() const;
	friend class BookManager;
};

#endif