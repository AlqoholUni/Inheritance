#ifndef VEHICLEH
#define VEHICLEH

#include <iostream>

using namespace std;

class Vehicle // base class
{
protected:
	~Vehicle() = default;
	int wheels; // number of wheels
	float weight; // unladen weight
public:
	Vehicle(int inwheels, float inweight); // constructor
	int getwheels() const; // how many wheels
	float getweight() const; // how heavy
	virtual void service();
};

class Car : public Vehicle // derived class
{
	int numpassengers; // number of passengers
public:
	virtual ~Car() = default;
	Car(int numwheels, float inweight, int people);
	int getpassengers() const; // how many passengers
	void service() override;
};

#endif
