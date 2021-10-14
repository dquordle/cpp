#include "Animal.hpp"
#include "../ex01/Animal.hpp"


Animal::Animal() {}

Animal::~Animal() {}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	type = src.getType();
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "I'm a God knows what" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

