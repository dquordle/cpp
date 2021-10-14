#include <iostream>

struct Data
{
	int first;
	std::string str;
	short sh;
	int second;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *data = new Data;
	uintptr_t ptr;
	Data *newData;

	data->first = 42;
	data->str = "That's incredible";
	data->sh = 21;
	data->second = 420;
	ptr = serialize(data);
	newData = deserialize(ptr);
	std::cout << newData->first << std::endl;
	std::cout << newData->str << std::endl;
	std::cout << newData->sh << std::endl;
	std::cout << newData->second << std::endl;
	delete data;
}

