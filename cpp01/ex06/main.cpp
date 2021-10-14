#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "C'mon, Karen, what do you want?" << std::endl;
	else if (argc > 2)
		std::cout << "Wow, Lady, slow down!" << std::endl;
	else
	{
		Karen typicalKaren;
		typicalKaren.complain(argv[1]);
	}
}