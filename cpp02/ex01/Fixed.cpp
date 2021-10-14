#include "Fixed.hpp"
#include "../ex02/Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(const int raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << num_of_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << num_of_bits));
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(value) / (1 << num_of_bits);
}

int Fixed::toInt(void) const
{
	return value >> num_of_bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}
