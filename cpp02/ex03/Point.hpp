#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

private:
	Fixed x;
	Fixed y;

public:
	Point();
	Point(Point const  & src);
	Point(Fixed const x, Fixed const y);
	Point & operator=(Point const  & src);
	~Point();
	const Fixed &getX() const;
	const Fixed &getY() const;
};


#endif
