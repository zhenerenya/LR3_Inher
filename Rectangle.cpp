#include "Rectangle.h"
Rectangle::Rectangle(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Rectangle::print() {
	std::cout << "x=" << x << std::endl << "y=" << y << std::endl << "  S=" << Square() << std::endl;
}
double Rectangle:: Square()
{
	return x * y;
}