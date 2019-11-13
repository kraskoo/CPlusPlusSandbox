#include "AirVehicle.h"

AirVehicle::AirVehicle(const int& seats, const Engine& engine) :
	Vehicle(seats, VehicleType::Air, engine)
{
}
