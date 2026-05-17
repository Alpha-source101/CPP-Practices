#include <iostream>
using namespace std;

int main(){
	int x=10;
	int* p = &x;
	int** pp = &p;
	cout<<"x is : "<<x<<endl;
	cout<<"p is : "<<*p<<endl;
	cout<<"before change pp is  : "<<**pp<<endl;
	**pp = 20;
		cout<<"after change pp is  : "<<**pp<<endl;
}

// Level 1: Basic – Single Inheritance
//Problem 1.1 – Basic Vehicle
//Create a class Vehicle with brand, speed, and a method showInfo().
//Derive a class Car that adds numberOfDoors. Override showInfo() to include door count.
//

#include <iostream>
using namespace std;
class Vehicle {
protected:	string brand;
	int speed;
public:	Vehicle(string b, int s) : brand(b), speed(s) {}
	virtual void showInfo() {
		cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
	}
};
class Car : public Vehicle {
private:	int numberOfDoors;
public:	Car(string b, int s, int doors) : Vehicle(b, s), numberOfDoors(doors) {}
	virtual void showInfo() {
		Vehicle::showInfo();
		cout << "Number of Doors: " << numberOfDoors << endl;
	}
};	