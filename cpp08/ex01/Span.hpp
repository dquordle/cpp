#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{

private:
	std::vector<int> *v;
	std::vector<int>::iterator current;
	Span();

public:
	Span(unsigned int n);
	~Span();
	Span(Span const & src);
	Span & operator=(Span const & src);
	void addNumber(int num) throw(ArrayIsFullException);
	void addManyNumbers(int count, int value) throw(ArrayIsFullException);
	int longestSpan() throw(NoSpanException);
	int shortestSpan() throw(NoSpanException);

	class ArrayIsFullException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NoSpanException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
