#pragma once

#include "Shape.h"

class Triangle : public Shape
{
private:
	double base;
	double height;

protected:
	void IAmAbstract() override;

public:
	Triangle();
	Triangle(const char* color);
	Triangle(const double& base, const double& height);
	Triangle(const char* color, const double& base, const double& height);
	double GetBase() const;
	void SetBase(const double& base);
	double GetHeight() const;
	void SetHeight(const double& height);
	
	double GetArea() override;
};
