#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
	DiamondTrap();

public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap & operator=(DiamondTrap const & src);

	void attack(std::string const & target);
	std::string getName();
	int getAttackDamage();
	void whoAmI();
	void printEn();
	void printHP();

};


#endif
