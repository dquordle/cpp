#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("robotomy request", 72, 45),
		target(target)
{
	srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
		: Form(src) {
	*this = src;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	target = src.target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	try
	{
		checkSignatureAndGrade(executor);
		std::cout << "Bzz drdrdrrr death frfrfr to *mechanic noizes* all buzz humanity grgrgrurg" << std::endl;
		if (rand() % 2 == 0)
			std::cout << target << " was successfully robotomized" << std::endl;
		else
			std::cout << "Robotomizing failure, skinbags have won this round" << std::endl;
	}
	catch (GradeTooLowException & e)
	{
		throw e;
	}
	catch(FormIsntSignedException & e)
	{
		throw e;
	}
}

