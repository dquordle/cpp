#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:
	Zombie();
	~Zombie();
	void ft_announce();
	void set_name(std::string name);

private:
	std::string _name;

};


#endif
