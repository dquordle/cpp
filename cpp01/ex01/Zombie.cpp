#include "Zombie.hpp"

Zombie::Zombie() : _name("Greg") {}

Zombie::~Zombie()
{
	std::cout << "Zombie named " << _name << " has died.. again, I guess" << std::endl;
}

void	Zombie::ft_announce()
{
	std::cout << "I'm zombie " << _name << " and I would love some brainz" << std::endl;
}

void Zombie::set_name(std::string name)
{
	_name = name;
}