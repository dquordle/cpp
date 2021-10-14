#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{

private:
	T *array;
	unsigned int length;

public:
	Array<T>()
	{
		array = new T[0];
		length = 0;
	}

	~Array()
	{
		delete [] array;
	}

	Array<T>(unsigned int n)
	{
		array = new T[n];
		length = n;
	}

	Array<T>(Array<T> const & src)
	{
		array = new T[src.length];
		for (unsigned int i = 0; i < src.length; i++)
			array[i] = src.array[i];
		length = src.length;
	}

	Array<T> & operator=(Array const & src)
	{
		if (&src != this)
		{
			delete [] array;
			array = new T[src.length];
			for (int i = 0; i < src.length; i++)
				array[i] = src.array[i];
			length = src.length;
		}
		return *this;
	}

	T & operator[](int idx)
	{
		if (idx < 0 || idx >= static_cast<int>(length))
			throw IndexOutOfBoundsException();
		return array[idx];
	}

	int size()
	{
		return length;
	}

	class IndexOutOfBoundsException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Index out of bounds";
			}
	};
};

#endif
