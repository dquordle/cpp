#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

private:
	int value;
	static const int num_of_bits = 8;

public:
	Fixed();
	Fixed(int value);
	Fixed( float value);
	~Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
