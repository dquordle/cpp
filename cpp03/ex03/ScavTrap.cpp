#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	hitPoints = 100;
	energyPointsDef = 50;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	energyPointsDef = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src.name)
{
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap <" << getName() << "> attacks <" << target << ">, "
		"causing <" << getAttackDamage() <<"> points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::printEn()
{
	std::cout << "Energy points: " << energyPoints << std::endl;
}

void ScavTrap::printHP()
{
	std::cout << "Hitpoints: " << hitPoints << std::endl;
}

int ScavTrap::getAttackDamage()
{
	return this->attackDamage;
}

std::string ScavTrap::getName()
{
	return this->name;
}
