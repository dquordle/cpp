#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

private:
	std::string const name;
	int grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & src);

	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	void signForm(Form & form) const;
	void executeForm(Form const & form) const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif
