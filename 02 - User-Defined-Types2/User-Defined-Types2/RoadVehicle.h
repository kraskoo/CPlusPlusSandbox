#pragma once
#include "Vehicle.h"

class RoadVehicle : public Vehicle
{
public:
	RoadVehicle(const int& seats, const Engine& engine);
};
