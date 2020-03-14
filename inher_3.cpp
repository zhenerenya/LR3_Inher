
#include <iostream>
#include "Rectangle.h"
#include "Prism.h"

int main()
{
	Rectangle R(0.5, 2.5);
	Prism P(0.2, 20, 10);
	Rectangle* r = &R;
	r->print();
	Prism* p = &P;
	p->print();
	system("pause");
	return 0;
}

