#pragma once
#pragma once
#include "RoadVehicle.h"

class Car : public RoadVehicle
{
public:
	Car(const int& seats, const Engine& engine);
	void Move() override;
};