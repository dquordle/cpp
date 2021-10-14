#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
					 Form("shrubbery creation", 145, 137),
					 target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
 : Form(src) {
	*this = src;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	target = src.target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{
		checkSignatureAndGrade(executor);
		std::ofstream ofs(target + "_shrubbery");
		if (!ofs.good())
		{
			std::cout << "Output file error" << std::endl;
			exit(1);
		}
		ofs << "                                                         .\n"
			   "                                              .         ;  \n"
			   "                 .              .              ;%     ;;   \n"
			   "                   ,           ,                :;%  %;   \n"
			   "                    :         ;                   :;%;'     .,   \n"
			   "           ,.        %;     %;            ;        %;'    ,;\n"
			   "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			   "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			   "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
			   "                `%;.     ;%;     %;'         `;%%;.%;'\n"
			   "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
			   "                    `:%;.  :;bd%;          %;@%;'\n"
			   "                      `@%:.  :;%.         ;@@%;'   \n"
			   "                        `@%.  `;@%.      ;@@%;         \n"
			   "                          `@%%. `@%%    ;@@%;        \n"
			   "                            ;@%. :@%%  %@@%;       \n"
			   "                              %@bd%%%bd%%:;     \n"
			   "                                #@%%%%%:;;\n"
			   "                                %@@%%%::;\n"
			   "                                %@@@%(o);  . '         \n"
			   "                                %@@@o%;:(.,'         \n"
			   "                            `.. %@@@o%::;         \n"
			   "                               `)@@@o%::;         \n"
			   "                                %@@(o)::;        \n"
			   "                               .%@@@@%::;         \n"
			   "                               ;%@@@@%::;.          \n"
			   "                              ;%@@@@%%:;;;. \n"
			   "                          ...;%@@@@@%%:;;;;,..";
		ofs.close();
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
