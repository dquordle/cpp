#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "////////////////" << std::endl;
	Animal *array[10];
	for (int k = 0; k < 10; k++)
	{
		if (k % 2)
			array[k] = new Cat();
		else
			array[k] = new Dog();
	}
	for (int k = 0; k < 10; k++)
		std::cout << array[k]->getOneIdea() << std::endl;
	for (int k = 0; k < 10; k++)
		delete array[k];
}
