#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat arthur("Arthur", 142);
	std::cout << arthur << std::endl;
	Bureaucrat ford("Ford", 42);
	std::cout << ford << std::endl;
	Bureaucrat trillian("Trillian", 1);
	std::cout << trillian << std::endl;
	ShrubberyCreationForm form1("Slartibartfast's fjords");
	std::cout << form1 << std::endl;
	RobotomyRequestForm form2("Marvin");
	std::cout << form2 << std::endl;
	PresidentialPardonForm form3("Max Quordlepleen");
	std::cout << form3 << std::endl;
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(form1);
	arthur.executeForm(form1);
	ford.executeForm(form1);
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(form2);
	ford.executeForm(form2);
	ford.signForm(form2);
	ford.executeForm(form2);
	std::cout << "/////////////////////" << std::endl;
	arthur.signForm(form3);
	ford.signForm(form3);
	trillian.signForm(form3);
	trillian.executeForm(form3);
}

