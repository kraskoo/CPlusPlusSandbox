#include "RoadVehicle.h"

RoadVehicle::RoadVehicle(const int& seats, const Engine& engine) :
	Vehicle(seats, VehicleType::Road, engine)
{
}
