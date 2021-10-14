#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure &Cure::operator=(const Cure &src)
{
	type = src.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *temp = new Cure(*this);
	return temp;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}