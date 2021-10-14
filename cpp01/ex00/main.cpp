#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie batista = Zombie("Dave Batista");
	batista.ft_announce();
	Zombie *murray = newZombie("Bill Murray");
	murray->ft_announce();
	randomChump("Martin Freeman");
	delete murray;
}