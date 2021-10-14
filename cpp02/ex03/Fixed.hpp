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
	Fixed(Fixed const & src);
	~Fixed();
	Fixed & operator=(Fixed const & src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator>(Fixed const & src) const;
	bool operator<(Fixed const & src) const;
	bool operator<=(Fixed const & src) const;
	bool operator>=(Fixed const & src) const;
	bool operator==(Fixed const & src) const;
	bool operator!=(Fixed const & src) const;
	Fixed operator+(Fixed const & src) const;
	Fixed operator-(Fixed const & src) const;
	Fixed operator*(Fixed const & src) const;
	Fixed operator/(Fixed const & src) const;
	Fixed & operator++();
	Fixed operator++(int);
	Fixed & operator--();
	Fixed operator--(int);
	static Fixed & min(Fixed &src1, Fixed &src2);
	static const Fixed & min(Fixed const &src1, Fixed const &src2);
	static Fixed & max(Fixed &src1, Fixed &src2);
	static const Fixed & max(Fixed const &src1, Fixed const &src2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
