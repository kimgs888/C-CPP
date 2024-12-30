//#include <iostream>
//
//using namespace std;
//class Car {
//private :
//	int fuel;
//public:
//	Car(int fuel) :fuel(fuel) {}
//	void showFuel () const {
//		cout << "fuel : " << fuel << endl;
//	}
//};
//class Truck : public Car {
//private:
//	int weight;
//public:
//	Truck(int fuel, int weight) : Car(fuel), weight(weight) {}
//	void showState() {
//		showFuel();
//		cout << "weight : " << weight << endl;
//	}
//};
//int main() {
//	Car* c = new Truck(100,3000);
//	c->showFuel();
//	//c->showState();
//	Truck* t = (Truck*)c;
//	t->showState();
//
//	Car* c2 = new Car(100);
//	Truck* t2 = (Truck*)c2;
//	t2->showState();
//	return 0;
//}