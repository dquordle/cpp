#include "FragTrap.hpp"

int main()
{
	FragTrap frag = FragTrap("frag");
	frag.attack("shlyopa");
	frag.takeDamage(3);
	frag.beRepaired(1);
	frag.printEn();
	frag.printHP();
	frag.highFivesGuys();
}
