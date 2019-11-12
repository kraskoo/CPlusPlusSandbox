#pragma once

#include<iostream>
#include <string>

class Shape
{
private:
	std::string color = "Transparent";
protected:
	virtual ~Shape() { std::cout << "Shape " << this << " - Destrcuted" << std::endl; }
	// This 'virtual function' mark class as abstract
	// this initialization to zero is kind of mandatory
	virtual void IAmAbstract() = 0;

public:
	Shape() { std::cout << "Shape " << this << " - Constructed" << std::endl; }
	Shape(const char* color);
	std::string GetColor() const;
	void SetColor(const char* value);

	// This 'virtual function' mark class as abstract
	virtual double GetArea() = 0;
};
