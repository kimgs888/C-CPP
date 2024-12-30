//#include <iostream>
//
///*
//	Reference datatype
//*/
//int main() {
//	int a = 10;
//	int b = a;
//
//	printf("%u %u \n", &a, &b);
//
//	int& c = a;
//
//	printf("%d %d %u %u\n", c, a, &c, &a);
//	c = 99;
//	printf("%d \n", a);
//
//	int& d = c;
//
//	int arr[3] = { 1,3,5 };
//	int& f1 = arr[0];
//	int& f2 = arr[1];
//	int& f3 = arr[2];
//
//	f2 = 100;
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//	return 0;
//}
//
//
