#ifndef __BOOK_H__
#define __BOOK_H__
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "String.h"
using namespace std;
class Book
{
private:
protected:
	String name;
	int price;
	String author;
	String publisher;
public:
	Book() ;
	Book(String name, int price
		, String author, String publisher);
	virtual ~Book();
	virtual void printBook() const;

	friend class BookManager;
};
#endif