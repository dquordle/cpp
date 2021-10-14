#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(Fixed(-2), Fixed(-2));
	Point b(Fixed(2), Fixed(-2));
	Point c(Fixed(0), Fixed(4));
	Point d(Fixed(0), Fixed(0));
	if (bsp(a, b, c, d))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside or on the edge" << std::endl;
	return 0;
}
