#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
private:
	double width;
	double height;

protected:
	void IAmAbstract() override;

public:
	Rectangle();
	Rectangle(const char* color);
	Rectangle(const double& width, const double& height);
	Rectangle(const char* color, const double& width, const double& height);
	
	double GetWidth() const;
	void SetWidth(const double& value);
	double GetHeight() const;
	void SetHeight(const double& value);
	double GetArea() override;
};
