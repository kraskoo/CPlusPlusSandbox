#include <iostream>

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using std::cout;
using std::endl;

void PrintRectangle(Rectangle& rect)
{
	cout << "width: " << rect.GetWidth() <<
		", height: " << rect.GetHeight() <<
		", color: " << rect.GetColor() <<
		", area: " << rect.GetArea() << endl << endl;
}

void PrintCircle(Circle& circle)
{
	cout << "radius: " << circle.GetRadius() <<
		", color: " << circle.GetColor() <<
		", area: " << circle.GetArea() << endl << endl;
}

void PrintTriangle(Triangle& triangle)
{
	cout << "base: " << triangle.GetBase() << ", height: " <<
		triangle.GetHeight() << ", color: " <<
		triangle.GetColor() << ", area: " << triangle.GetArea() << endl << endl;
}

int main(void)
{
	// Shape s1; // -> this class is marked as abstract
	Triangle t1;
	PrintTriangle(t1);
	Rectangle r1;
	PrintRectangle(r1);
	Circle c1;
	PrintCircle(c1);
	Triangle t2("Green");
	PrintTriangle(t2);
	Rectangle r2("White");
	PrintRectangle(r2);
	Circle c2("Yellow");
	PrintCircle(c2);
	Triangle t3("Blue", 11.342, 64.154754356);
	PrintTriangle(t3);
	Rectangle r3("Brown", 12.212, 4.23411);
	PrintRectangle(r3);
	Circle c3("Red", 63.21234);
	PrintCircle(c3);
	{
		Triangle t4("Pink", 2.4323566, 7.234125);
		PrintTriangle(t4);
		Rectangle r4("Black", 3, 4);
		PrintRectangle(r4);
	}
	
	return 0;
}
