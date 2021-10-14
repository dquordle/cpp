#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Eurica!";
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "I'm thinking of " + idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return *this;
}

std::string Brain::getOneIdea()
{
	return ideas[0];
}




