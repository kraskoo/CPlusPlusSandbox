#include <iostream>
#include "Triangle.h"

void Triangle::IAmAbstract()
{
	std::cout << "Triangle " << this << " - Constructed" << std::endl;
}


Triangle::Triangle() :
	base(0), height(0)
{
	this->IAmAbstract();
}

Triangle::Triangle(const char* color) :
	Shape(color), base(0), height(0)
{
	this->IAmAbstract();
}

Triangle::Triangle(const char* color, const double& base, const double& height) :
	Shape(color), base(base), height(height)
{
	this->IAmAbstract();
}

Triangle::Triangle(const double& base, const double& height) :
	base(base), height(height)
{
	this->IAmAbstract();
}


double Triangle::GetBase() const
{
	return this->base;
}

void Triangle::SetBase(const double& base)
{
	this->base = base;
}

double Triangle::GetHeight() const
{
	return this->height;
}

void Triangle::SetHeight(const double& height)
{
	this->height = height;
}

double Triangle::GetArea()
{
	return 0.5 * this->base * this->height;
}

