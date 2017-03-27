#include "vehicle.h"

class Lorry : public Vehicle
{
	float height;

public:
	Lorry(int inwheels, float inweight, float height)
		: Vehicle(inwheels, inweight),
		  height(height) { }

	virtual ~Lorry() = default;

	float getHeight() const;
	void service() override;
};

float Lorry::getHeight() const { return height; }

void Lorry::service() { cout << "For servicing your lorry, call your employer" << endl << endl; }

int main()
{
	auto lorryOne = Lorry(6, 10.0f, 10);
	auto lorryTwo = new Lorry(6, 20.0f, 20);

	cout << "Lorry One's Height: " << lorryOne.getHeight() << endl;
	cout << "Lorry One's Service: ";
	lorryOne.service();
	cout << "Lorry Two's Height: " << lorryTwo->getHeight() << endl;
	cout << "Lorry Two's Service: ";
	lorryTwo->service();

	Vehicle* vehicles[3];
	vehicles[0] = new Car(4, 1.5f, 5);
	vehicles[1] = new Lorry(6, 15.0f, 10);
	vehicles[2] = new Vehicle(2, 0.4f);

	for (auto vehicle : vehicles)
	{
		cout << "Vehicle Wheels: " << vehicle->getwheels() << endl;
		cout << "Vehicle Weight: " << vehicle->getweight() << endl;
		vehicle->service();
	}

	getwchar();
}
