#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "////////////////////" << std::endl;
	Span s = Span(10000);
	s.addNumber(8);
	try
	{
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 5000; i++)
		s.addNumber(i * i);
	s.addManyNumbers(2500, 42);
	try
	{
		s.addManyNumbers(2500, 42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
}
