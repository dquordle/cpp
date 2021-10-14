#include "Zombie.hpp"

std::string randomName()
{
	std::string name = " The ";
	int First_letter = 65  + rand() % 26;
	name += static_cast<char>(First_letter);
	int count = rand() % 8 + 1;
	for (int i = 0; i < count; i++)
	{
		int letter = 97 + rand() % 26;
		name += static_cast<char>(letter);
	}
	return name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		horde[i].set_name(name + randomName());
	}
	return horde;
}