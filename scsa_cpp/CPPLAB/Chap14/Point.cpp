#include <iostream>
#include "Point.h"
using namespace std;
template <class T>
Point<T>::Point(T r, T c) :r(r), c(c) {};

template <class T>
void Point<T>::print() const {
	cout << r << "," << c << endl;
};