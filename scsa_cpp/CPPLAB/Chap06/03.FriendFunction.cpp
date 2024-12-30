#include <iostream>
using namespace std;

class Point;
class PointOperator {
public:
	Point PointAdd(const Point& p1, const Point& p2);
};
class Point {
private :
	int x, y;
public:
	Point(const int& x, const int& y) :x(x), y(y) {}
	friend Point PointOperator::PointAdd(const Point& p1, const Point& p2);
	friend void printPoint(const Point& p);
};

Point PointOperator::PointAdd(const Point& p1, const Point& p2) {
	Point p(p1.x + p2.x,p1.y + p2.y);
	return p;
}

void printPoint(const Point& p) {
	cout << "x : " << p.x << ", y : " << p.y << endl;
}

int main() {
	Point p1(3, 5), p2(7,9);
	PointOperator op;
	Point r = op.PointAdd(p1, p2);
	printPoint(r);

	return 0;
}

