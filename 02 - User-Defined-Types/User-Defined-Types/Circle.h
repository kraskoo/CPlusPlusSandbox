#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:
	double radius;

protected:
	void IAmAbstract() override;

public:
	Circle();
	Circle(const char* color);
	Circle(const double& radius);
	Circle(const char* color, const double& radius);
	double GetRadius() const;
	void SetRadius(const double& radius);
	
	double GetArea() override;
};
