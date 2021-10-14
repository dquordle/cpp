#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::~Ice() {}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice &Ice::operator=(const Ice &src)
{
	type = src.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *temp = new Ice(*this);
	return temp;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
