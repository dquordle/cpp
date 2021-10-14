#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

protected:
	ScavTrap();
	virtual std::string getName();
	virtual int getAttackDamage();
	int energyPointsDef;

public:
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & src);

	virtual void attack(std::string const & target);
	void guardGate();
	void printEn();
	void printHP();
};

#endif
