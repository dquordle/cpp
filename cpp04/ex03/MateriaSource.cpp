#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : curIdx(0) {}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < curIdx; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
	for (int i = 0; i < 4; i++)
		inventory[i] = src.inventory[i];
	curIdx = 0;
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (curIdx < 4)
		inventory[curIdx++] = m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i]->getType().compare(type) == 0)
			return inventory[i]->clone();
	}
	return nullptr;
}
