#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The initial string actually lives at " << &str << std::endl;
	std::cout << "Pointer says that the string lives at " << stringPTR << std::endl;
	std::cout << "Reference says that the string lives at " << &stringREF << std::endl;


	std::cout << "Pointer says: " << *stringPTR << std::endl;
	std::cout << "Reference says: " << stringREF << std::endl;
}