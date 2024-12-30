//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//template<class T=int, int len=7>
//class SimpleArray {
//private :
//	T arr[len];
//public:
//	T& operator[](int idx) {
//		return arr[idx];
//	}
//};
//
//int main() {
//	SimpleArray<> arr;
//	arr[0] = 1;
//	arr[1] = 3;
//	arr[2] = 5;
//	arr[6] = 9;
//
//	cout << arr[0] << "." << arr[1] <<","<<  arr[2]<<  "," << arr[6] << endl;
//
//	SimpleArray<double, 4> arr;
//	return 0;
//}