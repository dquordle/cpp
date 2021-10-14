#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}

WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	type = src.getType();
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I eat people and wear their leather" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}