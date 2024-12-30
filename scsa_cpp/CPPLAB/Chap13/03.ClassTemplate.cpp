#include <iostream>
#include <cstring>

using namespace std;
template <typename T>
class sample {
private :
	T x, y;
public:
	sample(T a, T b);
	void print();
};
template <typename T>
sample<T>::sample(T a, T b) :x(a), y(b) {};

template <typename T>
void sample<T>::print() { cout << x << ", " << y << endl; }


int main() {
	sample<int> s(10, 20);
	s.print();
	sample<double> s1(10, 20);
	s1.print();
	return 0;
}