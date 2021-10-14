#include "Dog.hpp"
#include "../ex01/Dog.hpp"


Dog::Dog()
{
	type = "Dog";
}

Dog::~Dog() {}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	type = src.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

std::string Dog::getType() const
{
	return type;
}

