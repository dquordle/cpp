#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bob("Bob", 1);
	std::cout << bob << std::endl;
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
}

