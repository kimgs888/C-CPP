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
//// ��ġ���׿������� �����Լ�
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