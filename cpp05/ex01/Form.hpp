#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
	Form();

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(Form const & src);
	Form & operator=(Form const & src);

	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat const & bureaucrat);
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

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif
