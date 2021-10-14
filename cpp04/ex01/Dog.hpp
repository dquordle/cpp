#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain *brain;

public:
	Dog();
	~Dog();
	Dog(Dog const & src);
	Dog & operator=(Dog const & src);
	void makeSound() const;
	std::string getType() const;
	std::string getOneIdea() const;
};


#endif
