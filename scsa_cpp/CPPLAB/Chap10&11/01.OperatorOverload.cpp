//#include <iostream>
//
//using namespace std;
///*
//	������ �����ε�
//	operator Ű���带 �̿��ؼ�
//	�����ڸ� �Լ������ε� ��ų�� �ִ�
//*/
//int add(int a, int b) {
//	return a + b;
//}
//class Point {
//public :
//	int x, y;
//	Point(int x, int y) :x(x), y(y) {};
//	Point& operator+(int a) {
//		x += a;
//		y += a;
//		return *this;
//	}
//};
//Point operator+(Point p, Point p2) {
//	p.x += p2.x;
//	p.y += p2.y;
//	return p;
//}
//Point operator+(int a, Point p2) {
//	p2.x += a;
//	p2.y += a;
//	return p2;
//}
//int main() {
//	int a=10, b=5;
//	cout << add(a, b) << endl;
//	cout << a + b  << endl;
//	Point p(3, 5);
//	Point p2(13, 55);
//	Point& res = p.operator+(a);
//	res = p+a;
//	cout << res.x << "," << res.y << endl;;
//	res = p + p2;
//	cout << res.x << "," << res.y << endl;;
//	5 + p;
//	return 0;
//}