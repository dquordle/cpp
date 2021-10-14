#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bob("Bob", 1);
	std::cout << bob << std::endl;
	Bureaucrat bobert("Bobert", 84);
	std::cout << bobert << std::endl;
	Form form1("28b", 42, 21);
	std::cout << form1 << std::endl;
	try
	{
		Bureaucrat josh("Josh", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat josh("Josh", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bob.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	bobert.signForm(form1);
	bob.signForm(form1);
}

