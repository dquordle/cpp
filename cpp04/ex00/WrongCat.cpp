#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
}

WrongCat::~WrongCat() {}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	type = src.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow meow, motherf***er" << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}