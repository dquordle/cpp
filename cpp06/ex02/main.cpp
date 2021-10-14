#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return new A();
	if (i == 1)
		return new B();
	return new C();
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "Pointer said it's A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "Pointer said it's B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "Pointer said it's C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference said it's A" << std::endl;
		return ;
	}
	catch (std::exception & e) {}

	try
	{
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Reference said it's B" << std::endl;
		return ;
	}
	catch (std::exception & e) {}

	try
	{
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Reference said it's C" << std::endl;
		return ;
	}
	catch (std::exception & e) {}
}

int main()
{
	srand(time(0));
	Base * base = generate();
	identify(base);
	identify(*base);
	return 0;
}