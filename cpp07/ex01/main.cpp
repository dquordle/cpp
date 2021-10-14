#include <iostream>
#include "iter.hpp"

template<typename T>
void println(T smth)
{
	std::cout << smth << std::endl;
}

int main()
{
	int a[] = {4, 8, 15, 16, 23, 42};
	iter(a, 6, println);
	std::cout << "//////////////////" << std::endl;
	std::string turtles[] = {"Leo", "Raf", "Mike", "Don"};
	iter(turtles, 4, println);
	return 0;
}