#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

	ClapTrap();

public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap & operator=(ClapTrap const & src);
	virtual void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
