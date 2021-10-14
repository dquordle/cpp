#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

private:
	Form*	shrubberyCreation(std::string target);
	Form*	robotomyRequest(std::string target);
	Form*	presidentialPardon(std::string target);

	Form*	(Intern::*f[3])(std::string target);
	std::string forms[3];
public:
	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & src);

	Form *makeForm(std::string formName, std::string target);
};


#endif
