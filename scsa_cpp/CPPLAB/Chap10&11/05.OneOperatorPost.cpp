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
//	// ��ġ���׿������� �ɹ��Լ�
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
//// ��ġ���׿������� �����Լ�
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