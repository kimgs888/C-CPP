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
//	// 전치단항연산자의 맴버함수
//	Point& operator++() {
//		this->x++;
//		this->y++;
//		return *this;
//	}
//	/*Point& operator--() {
//		this->x--;
//		this->y--;
//		return *this;
//	}*/
//
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	friend Point& operator--(Point& p);
//};
//// 전치단항연산자의 전역함수
//Point& operator--(Point& p) {
//	p.x--;
//	p.y--;
//	return p;
//}
//
//int main() {
//	Point p(5, 10);
//	++p;
//	p.print();
//	--p;
//	
//
//	p.print();
//	return 0;
//}