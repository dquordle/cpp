#include "Intern.hpp"

Intern::Intern()
{
	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";
	f[0] = &Intern::shrubberyCreation;
	f[1] = &Intern::robotomyRequest;
	f[2] = &Intern::presidentialPardon;
}

Intern::~Intern() {}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Form *Intern::shrubberyCreation(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::robotomyRequest(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::presidentialPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*(f[i]))(target);
		}
	}
	std::cout << "Intern doesn't know "<< formName << " type of form" << std::endl;
	return nullptr;
}
