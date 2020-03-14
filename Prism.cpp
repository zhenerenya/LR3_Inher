#include "Prism.h"
Prism::Prism(double x, double y, double z) :
	Rectangle(x, y)
{
	this->z = z;
}
double Prism::Square() {
	return Rectangle::Square() *z;
}
void Prism::print() {
	Rectangle::print();
	std::cout << "z=" <<z<< std::endl << "V=" << Square() << std::endl;
}