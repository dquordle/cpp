#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

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

std::string Animal::getOneIdea() const
{
	return "no ideas";
}
