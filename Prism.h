#pragma once
#include "Rectangle.h"
class Prism : public Rectangle
{
protected: 
	double z;
public:
	Prism(double x, double y, double z);
	double Square();
	void print();
};

