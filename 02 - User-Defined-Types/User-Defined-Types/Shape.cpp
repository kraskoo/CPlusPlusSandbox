#include <iostream>
#include <string>

#include "Shape.h"

Shape::Shape(const char* color) : color(color)
{
	std::cout << "Shape " << this << " - Constructed" << std::endl;
}

std::string Shape::GetColor() const
{
	return this->color;
}

void Shape::SetColor(const char* value)
{
	this->color = value;
}

