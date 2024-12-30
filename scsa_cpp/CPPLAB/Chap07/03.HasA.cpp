#include <iostream>

using namespace std;

class Gun {
public :
	void shot() {}

};

class PoliceMan  {
private :
	Gun g;
public :
	void carefullShot() {
		g.shot();
	}
};