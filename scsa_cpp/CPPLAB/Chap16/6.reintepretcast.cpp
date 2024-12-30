#include <iostream>

using namespace std;


int main() {
	int a = 0x0110200;

	char* p = reinterpret_cast<char*>(&a);

	cout << *p << endl;
	return 0;
}