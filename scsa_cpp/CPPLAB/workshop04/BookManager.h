#ifndef __BOOKMANAGER_H__
#define __BOOKMANAGER_H__
#include "String.h"
#include "Book.h"
#include "Magazine.h"

class BookManager
{
private :
	Book* books[10];
public :
	BookManager() {}
	virtual ~BookManager() {}
	void printBook();
	void insertBook();
	void updateBook();
	void deleteBook();
	void findBook();
	void freeBooks();
};

#endif

