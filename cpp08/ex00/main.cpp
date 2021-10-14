#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::cout << "////////vector//////////" << std::endl;
	std::vector<int> v(10);
	std::vector<int>::iterator it;
	for (int i = 0; i < 10; i++)
		v[i] = (i * 2) % 10;
	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "//////////////////" << std::endl;
	it = easyfind(v, 6);
	if (it != v.end())
		*it = 42;
	it = easyfind(v, 9);
	if (it != v.end())
		*it = 100;
	for (it = v.begin(); it != v.end(); it++)
		std::cout << *it << std::endl;

	std::cout << "////////list//////////" << std::endl;
	std::list<int> l;
	std::list<int>::iterator lit;
	for (int i = 0; i < 10; i++)
		l.push_back(i * 2 % 10);
	for (lit = l.begin(); lit != l.end(); lit++)
		std::cout << *lit << std::endl;
	std::cout << "//////////////////" << std::endl;
	lit = easyfind(l, 6);
	if (lit != l.end())
		*lit = 42;
	lit = easyfind(l, 9);
	if (lit != l.end())
		*lit = 100;
	for (lit = l.begin(); lit != l.end(); lit++)
		std::cout << *lit << std::endl;
	return 0;
}
