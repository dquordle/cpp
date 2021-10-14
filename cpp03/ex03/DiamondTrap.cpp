#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name  + "_clap_name"),
		name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	hitPoints = FragTrap::hitPointsDef;
	energyPoints = ScavTrap::energyPointsDef;
	attackDamage = FragTrap::attackDamageDef;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.name + "_clap_name")
{
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	name = src.name;
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << name << std::endl;
	std::cout << "My granpa's ClapTrap name is " << this->ClapTrap::name << std::endl;
}

void DiamondTrap::printEn()
{
	std::cout << "Energy points: " << energyPoints << std::endl;
}

void DiamondTrap::printHP()
{
	std::cout << "Hitpoints: " << hitPoints << std::endl;
}

std::string DiamondTrap::getName()
{
	return this->name;
}

int DiamondTrap::getAttackDamage()
{
	return this->attackDamage;
}
