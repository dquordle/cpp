#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	Animal(Animal const & src);
	Animal & operator=(Animal const & src);
	virtual void makeSound() const;
	virtual std::string getType() const;
	virtual std::string getOneIdea() const;
};


#endif
