#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:
	FragTrap();

public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & src);

	void highFivesGuys(void);
	void printEn();
	void printHP();
};


#endif
