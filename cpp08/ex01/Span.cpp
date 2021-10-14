#include "Span.hpp"

Span::Span()
{
	v = new std::vector<int>;
	current = v->begin();
}

Span::Span(unsigned int n)
{
	v = new std::vector<int>(n);
	current = v->begin();
}

Span::~Span()
{
	delete v;
}

Span::Span(const Span &src)
{
	v = src.v;
	current = v->begin();
}

Span &Span::operator=(const Span &src)
{
	if (&src != this)
	{
		delete [] v;
		v = src.v;
		current = v->begin();
	}
	return *this;
}

void Span::addNumber(int num) throw(ArrayIsFullException)
{
	if (current == v->end())
		throw ArrayIsFullException();
	*(current++) = num;
}

void Span::addManyNumbers(int count, int value) throw(ArrayIsFullException)
{
	for (int i = 0; i < count; i++)
	{
		if (current == v->end())
			throw ArrayIsFullException();
		*(current++) = value;
	}
}

int Span::longestSpan() throw(NoSpanException)
{
	if (current == v->begin() || current == v->begin() + 1)
		throw NoSpanException();
	std::sort(v->begin(), current);
	return *(current - 1) - *v->begin();
}

int Span::shortestSpan() throw(NoSpanException)
{
	if (current == v->begin() || current == v->begin() + 1)
		throw NoSpanException();
	std::sort(v->begin(), current);
	int res = *(v->begin() + 1) - *(v->begin());
	std::vector<int>::iterator temp;
	for (temp = v->begin() + 1; temp != current; temp++)
	{
		if (*temp - *(temp - 1) < res)
			res = *temp - *(temp - 1);
	}
	return res;
}

const char *Span::ArrayIsFullException::what() const throw()
{
	return "Array is full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "There is no span";
}
