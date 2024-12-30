/*
	String 클래스를 제작하여 연산자재정의를 공부한다
	
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Book.h"
#include "Magazine.h"
#include "BookManager.h"
using namespace std;
int main() {
	BookManager man;
	int menu = 0;
	
	while (1) {
		cout << "1:목록, 2:도서명검색, 3:입력, 4:수정, 5:삭제, 0:종료" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			man.printBook();
			break;
		case 2:
			man.findBook();
			break;
		case 3:
			man.insertBook();
			break;
		case 4:
			man.updateBook();
			break;
		case 5:
			man.deleteBook();
			break;
		case 0:
			man.freeBooks();
			cout << "프로그램이 종료되었습니다." << endl;
			exit(0);
		default:
			break;
		}
	}
	return 0;
}