#include <iostream>
#include "Fixed.hpp"

int main( void )
{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		Fixed c(21.2f);
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b - c * b << std::endl;
		std::cout << b - c << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		return 0;
}
