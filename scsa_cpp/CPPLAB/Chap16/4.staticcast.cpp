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

	// cast �����ڸ� ����ϸ�
	double res1 = static_cast<double>(a) / static_cast<double>(b);
	cout << res1 << endl;

	int* p = &a;
	float* pf = (float*)p; // full casting ������ ������ �������� �ȴ�
	
	// ������ static_cast �� ����ϸ� ĳ������ �ȵȴ�
	// float* pf1 = static_cast<float*>(p);

	Car* c = new Car(50);
	Truck* t = static_cast<Truck*>(c); //virtual �Լ� ���ο� ������� �ٿ�ĳ���� �ȴ�
										// ������ �߻��Ҽ� �ִ�
	return 0;
}