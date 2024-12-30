//#include <iostream>
//
//using namespace std;
//
//void print(int& a) {
//	a++;
//}
//
//int main() {
//	const int a  = 10;
//	
//	int& b = const_cast<int&>(a);
//	
//	b++;
//	cout << a << ", " << b << endl;
//	
//	print(const_cast<int&>(a));
//
//	return 0;
//}