#include "Fixed.hpp"
#include "Point.hpp"

Fixed vectorProduct(Point const first, Point const second, Point const third)
{
	Fixed temp1((second.getX() - first.getX()) * (third.getY() - second.getY()));
	Fixed temp2((third.getX() - second.getX()) * (second.getY() - first.getY()));
	return Fixed(temp1 - temp2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed vect1 = vectorProduct(a, b, point);
	Fixed vect2 = vectorProduct(b, c, point);
	Fixed vect3 = vectorProduct(c, a, point);
	if (vect1.toFloat() < 0 && vect2.toFloat() < 0 && vect3.toFloat() < 0)
		return true;
	if (vect1.toFloat() > 0 && vect2.toFloat() > 0 && vect3.toFloat() > 0)
		return true;
	return false;
}


