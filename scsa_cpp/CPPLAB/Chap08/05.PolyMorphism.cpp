#include <iostream>

using namespace std;

class Animal {
public :
	virtual void move() = 0;
};
class Dog : public Animal {
public:
	virtual void move() { cout << "개가움직여요" << endl; };
	void bark() { cout << "개가짖어요" << endl; }
};
class IFly {
public:
	virtual void fly() = 0;
};
class Bird : public Animal, public IFly {
public:
	virtual void move() { cout << "새가움직여요" << endl; };
	void fly() { cout << "새가 날아요" << endl; }
};
class Human : public Animal {
public:
	virtual void move() { cout << "사람이움직여요" << endl; };
};

class Superman : public Human, public IFly {
public:
	virtual void move() { cout << "슈퍼맨이 움직여요" << endl; };
	void fly() { cout << "슈퍼맨이 날아요" << endl; }
};

class Manager {
public:
	void toMove(Animal* a) {
		a->move();
	}
	void toFly(IFly* a) {
		a->fly();
	}
};

int main() {
	//Animal* a = new Animal();
	Dog* d = new Dog();
	Bird* b = new Bird;
	Human* h = new Human();
	Superman* man = new Superman();
	Manager* m = new Manager();
	m->toMove(d);
	m->toMove(b);
	m->toMove(h);

	m->toFly(b);
	m->toFly(man);
	return 0;
}