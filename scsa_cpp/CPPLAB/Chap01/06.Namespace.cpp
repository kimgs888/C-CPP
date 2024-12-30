#include <iostream>

namespace AA {
	int a;
	void func1();
}

namespace BB {
	int a;
	void func1() ;
}
void AA::func1() {
	std::cout << "AA::func1" << std::endl;
}
void BB::func1() {
	std::cout << "BB::func1" << std::endl;
}
namespace CC {
	void func1() { std::cout << "CC::func1" << std::endl; };
	namespace DD {
		void func1() { std::cout << "DD::func1" << std::endl; };
	}
}
using AA::func1;
using std::cout;
using std::cin;
using std::endl;

using namespace std;

int main() {
	AA::a = 20;
	AA::func1();
	BB::a = 30;
	BB::func1();
	CC::func1();
	CC::DD::func1();
	
	func1();

	cout << "cout " << endl;
	
	return 0;
}