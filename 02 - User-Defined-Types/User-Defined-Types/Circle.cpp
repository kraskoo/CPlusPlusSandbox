#include <cmath>
#include "Circle.h"

#define PI 3.141592653589793238462643383279502884L

void Circle::IAmAbstract()
{
	std::cout << "Circle " << this << " - Constructed" << std::endl;
}


Circle::Circle() : radius(0)
{
	this->IAmAbstract();
}

Circle::Circle(const char* color) :
	Shape(color), radius(0)
{
	this->IAmAbstract();
}

Circle::Circle(const double& radius) : radius(radius)
{
	this->IAmAbstract();
}

Circle::Circle(const char* color, const double& radius) :
	Shape(color), radius(radius)
{
	this->IAmAbstract();
}

double Circle::GetRadius() const
{
	return this->radius;
}

void Circle::SetRadius(const double& radius)
{
	this->radius = radius;
}

double Circle::GetArea()
{
	return PI * pow(this->radius, 2);
}
