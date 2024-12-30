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
//	void print() {
//		cout << x << ", " << y << endl;
//	}
//
//	friend ostream& operator<<(ostream& os, Point& p);
//
//};
//
//ostream& operator<<(ostream& os, Point& p) {
//	os << "x = " << p.x << ", y = " << p.y << endl;
//	return os;
//}
//
//
//int main() {
//
//	Point p(10, 20);
//	p.print();
//
//	cout << p << p << p;
//}
//
