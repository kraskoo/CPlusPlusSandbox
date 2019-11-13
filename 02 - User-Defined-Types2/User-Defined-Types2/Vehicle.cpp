#include <stdexcept>
#include "Vehicle.h"

Vehicle::~Vehicle() = default;

Vehicle::Vehicle(const int& seats, const VehicleType& vehicleType, const Engine& engine)
{
	if (this->seats != 0)
	{
		throw std::invalid_argument("Cannot construct one vehicle twice!");
	}

	this->seats = seats;
	this->vehicleType = vehicleType;
	this->engine = engine;
}

int Vehicle::GetSeats() const
{
	return this->seats;
}

VehicleType Vehicle::GetVehicleType() const
{
	return this->vehicleType;
}


Engine Vehicle::GetEngine() const
{
	return this->engine;
}
