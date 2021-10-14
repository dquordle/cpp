#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "*uses " << type << " at " << target.getName() << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	(void)src;
	return *this;
}
