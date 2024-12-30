//#include <iostream>
//
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//public:
//	Point() {}
//	Point(int x = 0, int y = 0) :x(x), y(y) {};
//
//	friend Point& operator+(Point& p, int a);
//	friend Point& operator+(int a, Point& p);
//};
//Point& operator+(Point& p, int a) {
//	p.x += a;
//	p.y += a;
//	return p;
//}
//Point& operator+(int a, Point& p) {
//	p.x += a;
//	p.y += a;
//	return p;
//}
//Point& operator+(Point& a, Point& p) {
//	
//	return p;
//}
//
//int main() {
//	Point p(10, 5);
//	3 + p + 3 + 3 + p;
//
//	return 0;
//}