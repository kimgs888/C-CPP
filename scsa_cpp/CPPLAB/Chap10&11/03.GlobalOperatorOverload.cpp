//#include <iostream>
//
//using namespace std;
//// 전역함수 연산자 오버로드
//
//class Point {
//private:
//	int x, y;
//public:
//	Point() {}
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	
//	void print() const {
//		cout << this->x << "," << this->y << endl;;
//	}
//	friend Point& operator+(Point& p1, Point& p2);
//	friend  Point& operator+(int a, Point& p2);
//};
//// 전역함수 형태의 + 연산자오버로드 함수
//
//Point& operator+(Point& p1, Point& p2) {
//	p1.x += p2.x;
//	p1.y += p2.y;
//	return p1;
//}
//Point& operator+(int a, Point& p2) {
//	p2.x+= a;
//	p2.y += a;
//	return p2;
//}
//int main() {
//	Point p1(10, 5);
//	Point p2(5, 3);
//
//	// 전역함수형태의 operator+() 실행
//	//Point& res = operator+(p1 , p2);
//	Point& res = p1 + p2;
//	3 + p1;
//	res.print();
//}