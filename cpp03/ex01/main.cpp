#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav = ScavTrap("scav");
	scav.attack("shlyopa");
	scav.takeDamage(3);
	scav.beRepaired(1);
	scav.printEn();
	scav.printHP();
	scav.guardGate();
}

