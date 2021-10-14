#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

private:
	Brain *brain;

public:
	Cat();
	~Cat();
	Cat(Cat const & src);
	Cat & operator=(Cat const & src);
	void makeSound() const;
	std::string getType() const;
	std::string getOneIdea() const;
};

#endif
