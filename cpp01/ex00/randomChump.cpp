#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie = Zombie(name);
	zombie.ft_announce();
}