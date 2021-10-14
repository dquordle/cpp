#include "Point.hpp"

Point::Point()
{
	x = Fixed(0);
	y = Fixed(0);
}

Point::Point(const Point &src)
{
	*this = src;
}

Point::Point(const Fixed x, const Fixed y)
{
	this->x = x;
	this->y = y;
}

Point &Point::operator=(const Point &src)
{
	this->x = src.x;
	this->y = src.y;
	return *this;
}

Point::~Point() {}

const Fixed &Point::getX() const
{
	return x;
}

const Fixed &Point::getY() const
{
	return y;
}
