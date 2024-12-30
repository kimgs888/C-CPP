//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//template<class T>
//class Sample {
//private:
//	T x, y;
//public:
//	Sample(T a, T b);
//	void print();
//	friend Sample<int> operator+(Sample<int>& s1, Sample<int>& s2);
//	friend Sample<double> operator+(Sample<double>& s1, Sample<double>& s2)
//};
//
//Sample<int> operator+(Sample<int>& s1, Sample<int>& s2) {
//	return Sample<int>(s1.x + s2.x, s1.y + s2.y);
//}
//Sample<double> operator+(Sample<double>& s1, Sample<double>& s2) {
//	return Sample<double>(s1.x + s2.x, s1.y + s2.y);
//}
//template <typename T>
//Sample<T>::Sample(T a, T b) :x(a), y(b) {};
//
//template <typename T>
//void Sample<T>::print() { cout << x << ", " << y << endl; }
//
//int main() {
//	Sample<int> s(10, 20);
//	Sample<int> s2(5, 3);
//	Sample<int> r = s + s2;
//	r.print();
//
//	Sample<double> s3(10, 20);
//	Sample<double> s4(5, 3);
//	Sample<double> r = s3 + s4;
//	r.print();
//	return 0;
//}