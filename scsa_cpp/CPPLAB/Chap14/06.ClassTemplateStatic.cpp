#include <iostream>
#include <cstring>

using namespace std;

template<class T>
class Simple {
private:
	static T data;
public:
	void IncrementData() {
		data += 1;
		cout << data << endl;
	}
};
template<class T>
T Simple<T>::data = 0;

int main() {
	Simple<int> s1;
	s1.IncrementData();
	s1.IncrementData();
	s1.IncrementData();
	Simple<int> s2;
	s2.IncrementData();

	Simple<double> s3;
	s3.IncrementData();

	return 0;
}