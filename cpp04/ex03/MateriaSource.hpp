#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria *inventory[4];
	int curIdx;
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & src);
	void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
};


#endif
