#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T* address, int size, void f(T))
{
	for (int i = 0; i < size; i++)
		f(address[i]);
}

#endif
