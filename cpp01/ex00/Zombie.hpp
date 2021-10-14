#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:
	Zombie(std::string name);
	~Zombie();
	void ft_announce();

private:
	Zombie();
	std::string _name;

};


#endif
