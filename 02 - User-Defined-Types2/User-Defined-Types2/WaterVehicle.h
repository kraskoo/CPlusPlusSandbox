#pragma once
#include "Vehicle.h"

class WaterVehicle : public Vehicle
{
public:
	WaterVehicle(const int& seats, const Engine& engine);
};
