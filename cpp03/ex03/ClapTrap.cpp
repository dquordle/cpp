#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called (shouldn't)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
		energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
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
