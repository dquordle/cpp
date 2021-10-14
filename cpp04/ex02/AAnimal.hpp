#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{

protected:
	AAnimal();
	std::string type;

public:
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	virtual std::string getType() const;
	virtual std::string getOneIdea() const = 0;
};


#endif
