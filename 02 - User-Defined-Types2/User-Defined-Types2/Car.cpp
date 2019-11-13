#include <iostream>
#include "Car.h"

Car::Car(const int& seats, const Engine& engine) : RoadVehicle(seats, engine)
{	
}

void Car::Move()
{
	std::cout << "Brrrr!" << std::endl;
}