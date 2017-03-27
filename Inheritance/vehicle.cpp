#include "vehicle.h"

Vehicle::Vehicle(int inwheels, float inweight)
{ // constructor for base class
	wheels = inwheels;
	weight = inweight;
}

int Vehicle::getwheels() const { return wheels; }

float Vehicle::getweight() const { return weight; }

void Vehicle::service() { cout << "Information on servicing a general vehicle is not known" << endl << endl; }

Car::Car(int numwheels, float inweight, int people) : Vehicle(numwheels, inweight) { numpassengers = people; }

int Car::getpassengers() const { return numpassengers; }

void Car::service() { cout << "For servicing your car, take it to your local garage" << endl << endl; }
