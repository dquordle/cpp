#include "Form.hpp"

Form::Form() {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {}

Form::~Form() {}

Form::Form(const Form &src)
{
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	isSigned = src.isSigned;
	gradeToSign = src.gradeToSign;
	gradeToExecute = src.gradeToExecute;
	return *this;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExecute() const
{
	return gradeToExecute;
}

const std::string &Form::getName() const
{
	return name;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high for this form";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low for this form";
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "The form " << src.getName() << " is ";
	if (!src.getIsSigned())
		o << "not ";
	o << "signed." << std::endl;
	o << "To sign you must have grade " << src.getGradeToSign() << std::endl;
	o << "To execute you must have grade " << src.getGradeToExecute();
	return o;
}

