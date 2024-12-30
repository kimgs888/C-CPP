#include <iostream>

using namespace std;
class Car {
private:
	int fuel;
public:
	Car(int fuel) :fuel(fuel) {}
	void showState() const {
		cout << "fuel : " << fuel << endl;
	}
};
class Truck : public Car {
private:
	int weight;
public:
	Truck(int fuel, int weight) : Car(fuel), weight(weight) {}
	void showState() const {
		Car::showState();
		cout << "weight : " << weight << endl;
	}
};
int main() {
	// c style
	int a=10, b=4;
	double res = (double)a / (double)b;
	cout << res << endl;

	// cast 연산자를 사용하면
	double res1 = static_cast<double>(a) / static_cast<double>(b);
	cout << res1 << endl;

	int* p = &a;
	float* pf = (float*)p; // full casting 가능은 하지만 안전하지 안다
	
	// 하지만 static_cast 를 사용하면 캐스팅이 안된다
	// float* pf1 = static_cast<float*>(p);

	Car* c = new Car(50);
	Truck* t = static_cast<Truck*>(c); //virtual 함수 여부와 상관없이 다운캐스팅 된다
										// 문제가 발생할수 있다
	return 0;
}