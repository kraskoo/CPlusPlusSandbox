#include "Rectangle.h"

void Rectangle::IAmAbstract()
{
	std::cout << "Rectangle " << this << " - Constructed" << std::endl;
}


Rectangle::Rectangle() :
	width(0), height(0)
{
	this->IAmAbstract();
}

Rectangle::Rectangle(const char* color) :
	Shape(color), width(0), height(0)
{
	this->IAmAbstract();
}

Rectangle::Rectangle(const char* color, const double& width, const double& height) :
	Shape(color), width(width), height(height)
{
	this->IAmAbstract();
}

Rectangle::Rectangle(const double& width, const double& height) :
	width(width), height(height)
{
	this->IAmAbstract();
}

double Rectangle::GetWidth() const
{
	return this->width;
}

void Rectangle::SetWidth(const double& value)
{
	this->width = value;
}

double Rectangle::GetHeight() const
{
	return this->height;
}

void Rectangle::SetHeight(const double& value)
{
	this->height = value;
}

double Rectangle::GetArea()
{
	return this->width * this->height;
}