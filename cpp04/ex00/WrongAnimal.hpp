#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{

protected:
	std::string type;

public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=(WrongAnimal const & src);
	void makeSound() const;
	std::string getType() const;
};


#endif
