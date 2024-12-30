#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
	char name[30] = {'\0'};
	char publisher[30] = { '\0' };
	char author[30] = { '\0' };
	int price = 0;
public:
	Book();
	Book(char* name, char* publisher, char* author, int price);
	~Book();
	void setName(char* name);
	char* getName();
	void setPublisher(char* name);
	char* getPublisher();
	void setAuthor(char* name);
	char* getAuthor();
	void setPrice(int price);
	int getPrice();
	void print();
};