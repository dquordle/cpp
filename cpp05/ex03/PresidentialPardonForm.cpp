#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form("presidential pardon", 25, 5),
		target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
		: Form(src) {
	*this = src;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	target = src.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		checkSignatureAndGrade(executor);
		std::cout << target << " was pardoned by his majesty Zaphod Beeblebrox" << std::endl;
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