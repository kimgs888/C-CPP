/*
	String Ŭ������ �����Ͽ� �����������Ǹ� �����Ѵ�
	
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
		cout << "1:���, 2:������˻�, 3:�Է�, 4:����, 5:����, 0:����" << endl;
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
			cout << "���α׷��� ����Ǿ����ϴ�." << endl;
			exit(0);
		default:
			break;
		}
	}
	return 0;
}