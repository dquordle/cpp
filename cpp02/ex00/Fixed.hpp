#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

private:
	int value;
	static const int num_of_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

};


#endif
