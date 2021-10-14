#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

protected:
	FragTrap();
	int hitPointsDef;
	int attackDamageDef;

public:
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & src);

	void highFivesGuys(void);
	void printEn();
	void printHP();
};


#endif
