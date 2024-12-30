//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//template<class T>
//class Sample {
//private:
//	T data;
//public:
//	Sample(T a) : data(a) {}
//	int getSize() { return sizeof(data); }
//};
//
//template<>
//class Sample<char*> {
//private:
//	char* data;
//public:
//	Sample(char* a) : data(a) {}
//	int getSize() { return strlen(data); }
//};
//int main() {
//	Sample<int> s1(10);
//	cout << s1.getSize() << endl;
//	char name[10] = "hello";
//	Sample<char*> s2(name);
//	cout << s2.getSize() << endl;
//	return 0;
//}