#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "//////////////////" << std::endl;
	MutantStack<char> mst;
	for (char c = 'a'; c < 'z' + 1; c++)
		mst.push(c);
	MutantStack<char>::iterator mit = mst.begin();
	MutantStack<char>::iterator mite = mst.end();
	for (; mit != mite; mit++)
		std::cout << static_cast<char>(std::toupper(*mit)) << std::endl;
	return 0;
}
