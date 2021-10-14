#include "Cat.hpp"
#include "../ex01/Cat.hpp"


Cat::Cat()
{
	type = "Cat";
}

Cat::~Cat() {}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	type = src.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

std::string Cat::getType() const
{
	return type;
}

