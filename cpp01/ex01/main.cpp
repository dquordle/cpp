#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	srand(time(0));
	int n = 1 + rand() % 10;
	Zombie *horde = zombieHorde(n, "Jonathan");
	for (int i = 0; i < n; ++i)
	{
		horde[i].ft_announce();
	}
	delete [] horde;
}
