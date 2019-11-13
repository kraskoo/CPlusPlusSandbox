#include <iostream>
#include "Car.h"

using std::cout;
using std::endl;
using std::string;

string GetEngineType(EngineType et)
{
	switch (et)
	{
	case EngineType::Diesel: return "Diesel";
	case EngineType::Gasoline: return "Gasoline";
	default: return "Unknown Engine Type";
	}
}

string GetVehicleType(VehicleType vt)
{
	switch (vt)
	{
	case VehicleType::Air: return "Air";
	case VehicleType::Road: return "Road";
	case VehicleType::Water: return "Water";
	default: return "Unknown Vehicle Type";
	}
}

void PrintVehicle(const Vehicle& vehicle)
{
	cout << "Engine RPM: " << vehicle.GetEngine().rpm <<
		", Engine type: " << GetEngineType(vehicle.GetEngine().type) <<
		", Vehicle type: " << GetVehicleType(vehicle.GetVehicleType()) <<
		", Seats: " << vehicle.GetSeats() << endl;
}

int main()
{
	Car c1(4, Engine{ EngineType::Diesel, 1500 });
	PrintVehicle(c1);
	return 0;
}