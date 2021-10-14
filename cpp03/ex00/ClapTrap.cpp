#include "ClapTrap.hpp"
#include "../ex01/ClapTrap.hpp"


ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
		energyPoints(10), attackDamage(0)
{
	std::cout << "Constructed <" << name << ">" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructed <" << name << ">" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src): name(src.name), hitPoints(src.hitPoints),
energyPoints(src.energyPoints), attackDamage(src.attackDamage) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap <" << name << "> attacks <" << target << ">, "
			"causing <" << attackDamage <<"> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << name << "> takes <" << amount <<
		  "> points of damage!" << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << name << "> repairs <" << amount <<
			  "> points of health!" << std::endl;
	hitPoints += amount;
}
