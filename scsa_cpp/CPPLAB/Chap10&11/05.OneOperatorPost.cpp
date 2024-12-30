//#include <iostream>
//
//using namespace std;
//
//class Point {
//private:
//	int x, y;
//public:
//	Point() {}
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	// 후치단항연산자의 맴버함수
//	const Point& operator++(int) {
//		const Point tmp(this->x, this->y);
//		this->x++;
//		this->y++;
//		return tmp;
//	}
//	
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	friend const Point& operator--(Point& p, int);
//};
//// 후치단항연산자의 전역함수
//const Point& operator--(Point& p, int) {
//	const Point tmp(p.x, p.y);
//	p.x--;
//	p.y--;
//	return tmp;
//}
//
//int main() {
//	Point p(5, 10);
//	//++p;
//	p.print();
//	//--p;
//	p++;
//	p--;
//
//	p.print();
//	return 0;
//}