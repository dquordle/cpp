#include <iostream>
#include "Phonebook.class.hpp"

int main(int argc, char **argv)
{
	Phonebook phonebook;
	std::string str;

	(void)argv;
	if (argc != 1)
		std::cout << "I couldn't care less about your arguments, I know what to do!" << std::endl;
	while (str != "EXIT")
	{
		std::cout
				<< "Please enter one of these commands: \"ADD\", \"SEARCH\" of \"EXIT\": ";
		str = phonebook.ft_readline();
		if (str == "ADD")
			phonebook.ft_add();
		else if (str == "SEARCH")
			phonebook.ft_search();
		else if (str == "EXIT")
			std::cout << "Say bye bye to your contacts" << std::endl;
		else
			std::cout << "\"" << str << "\" is not a correct command" << std::endl;
	}
	return 0;
}
