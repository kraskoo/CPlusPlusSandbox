#pragma once
#include "Vehicle.h"

class AirVehicle : public Vehicle
{
public:
	AirVehicle(const int& seats, const Engine& engine);
};
