//#include <iostream>
//
//using namespace std;
//class Car {
//private:
//	int fuel;
//public:
//	Car(int fuel) :fuel(fuel) {}
//	virtual void showState() const {
//		cout << "fuel : " << fuel << endl;
//	}
//};
//class Truck : public Car {
//private:
//	int weight;
//public:
//	Truck(int fuel, int weight) : Car(fuel), weight(weight) {}
//	void showState() const {
//		Car::showState();
//		cout << "weight : " << weight << endl;
//	}
//};
//int main() {
//	Car* c = new Truck(50, 1000);
//	//Truck* t = dynamic_cast<Truck*>(c); // error (Car에 가상함수가 없음을 주의)
//	Car* c1 = new Car(50);
//	//Truck* t2 = dynamic_cast<Truck*>(c1); // error
//	//if (t1 == nullptr) {
//	//	cout << "null" << endl;
//	//}
//	Truck* t3 = new Truck(50, 100);
//	Car* c2 = dynamic_cast<Car*>(t3);
//	//c2->showState();
//	
//	Truck* t4 = dynamic_cast<Truck*>(c); //virtual function이 Car 에 있기 때문에 가능하다
//	t4->showState();
//	return 0;
//}