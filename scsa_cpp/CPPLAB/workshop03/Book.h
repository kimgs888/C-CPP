#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
class Book
{
private:
protected:
	char name[50];
	int price;
	char author[50];
	char publisher[50];
public:
	Book();
	Book(const char* name, int price
		, const char* author, const char* publisher);
	Book(const Book& ref);
	
	// virtual 상속
	virtual ~Book();
	void setAuthor(char* author);
	void setName(char* name);
	void setPrice(int price);
	void setPublicsher(char* publisher);
	// 가상함수
	virtual void printBook() const;

	friend class BookManager;
};

#endif