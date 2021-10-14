#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	AMateria();
	std::string type;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & src);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
