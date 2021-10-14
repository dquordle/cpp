#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name) : name(name), curIdx(0) {}

Character::~Character()
{
	for (int i = 0; i < curIdx; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (curIdx < 4)
		inventory[curIdx++] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && inventory[idx] != nullptr)
		inventory[idx]->use(target);
}

Character::Character(const Character &src)
{
	*this = src;
}

Character &Character::operator=(const Character &src)
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


