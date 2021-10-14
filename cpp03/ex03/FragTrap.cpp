#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	hitPointsDef = 100;
	hitPoints = 100;
	energyPoints = 100;
	attackDamageDef = 30;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	hitPointsDef = 100;
	hitPoints = 100;
	energyPoints = 100;
	attackDamageDef = 30;
	attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src.name)
{
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Oh I would love to get high and go to FiveGuys" << std::endl;
}

void FragTrap::printEn()
{
	std::cout << "Energy points: " << energyPoints << std::endl;
}

void FragTrap::printHP()
{
	std::cout << "Hitpoints: " << hitPoints << std::endl;
}

