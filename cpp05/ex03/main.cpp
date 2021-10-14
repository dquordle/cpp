#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat arthur("Arthur", 142);
	std::cout << arthur << std::endl;
	Bureaucrat ford("Ford", 42);
	std::cout << ford << std::endl;
	Bureaucrat trillian("Trillian", 1);
	std::cout << trillian << std::endl;
	Intern randomFrequentFlyer;
	Form *form1;
	form1 = randomFrequentFlyer.makeForm("shrubbery creation", "Slartibartfast's fjords");
	std::cout << *form1 << std::endl;
	Form *form2;
	form2 = randomFrequentFlyer.makeForm("robotomy request", "Marvin");
	std::cout << *form2 << std::endl;
	Form *form3;
	form3 = randomFrequentFlyer.makeForm("presidential pardon", "Max Quordlepleen");
	std::cout << *form3 << std::endl;
	Form *form4;
	form4 = randomFrequentFlyer.makeForm("vogon's poetry hearing", "sanity");
	if (form4)
		std::cout << *form4 << std::endl;
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(*form1);
	arthur.executeForm(*form1);
	ford.executeForm(*form1);
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(*form2);
	ford.executeForm(*form2);
	ford.signForm(*form2);
	ford.executeForm(*form2);
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(*form3);
	ford.signForm(*form3);
	trillian.signForm(*form3);
	trillian.executeForm(*form3);
}

