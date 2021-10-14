#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{

private:
	std::string ideas[100];

public:
	Brain();
	Brain(std::string idea);
	~Brain();
	Brain(Brain const & src);
	Brain & operator=(Brain const & src);
	std::string getOneIdea();
};


#endif
