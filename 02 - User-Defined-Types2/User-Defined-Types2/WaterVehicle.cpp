#include "WaterVehicle.h"

WaterVehicle::WaterVehicle(const int& seats, const Engine& engine) :
	Vehicle(seats, VehicleType::Water, engine)
{
}
