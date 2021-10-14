#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	_num_of_contacts = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void	Phonebook::ft_get_set(std::string attr, int num)
{
	std::string str;
	if (num == 6)
	{
		size_t found;
		found = 0;
		while (found != std::string::npos)
		{
			std::cout << "Please enter phone number :";
			str = ft_readline();
			found = str.find_first_not_of("0123456789");
			if (found != std::string::npos)
				std::cout << "For the phone number digits are required, dummy" << std::endl;
			else
				_contacts[_num_of_contacts].set_attr(num, str);
		}
	}
	else
	{
		std::cout << "Please enter " << attr << " :";
		str = ft_readline();
		_contacts[_num_of_contacts].set_attr(num, str);
	}
}

void	Phonebook::ft_add(void)
{
	if (_num_of_contacts == 8)
	{
		std::cout << "The phonebook is full, can't add more than 8 contacts" << std::endl;
		return;
	}
	ft_get_set("first name", 0);
	ft_get_set("last name", 1);
	ft_get_set("nickname", 2);
	ft_get_set("login", 3);
	ft_get_set("postal address", 4);
	ft_get_set("email address", 5);
	ft_get_set("phone number", 6);
	ft_get_set("birthday date", 7);
	ft_get_set("favorite meal", 8);
	ft_get_set("underwear color", 9);
	ft_get_set("darkest secret", 10);
	_num_of_contacts++;
}

void	Phonebook::ft_search(void)
{
	int	index;
	int	i;

	if (_num_of_contacts == 0)
		std::cout << "No contacts yet" << std::endl;
	else
	{
		for (i = 0; i < 45; i++)
			std::cout << '_';
		std::cout << std::endl << "|     Index|First name| Last name|  Nickname|" << std::endl;
		for (i = 0; i < 45; i++)
			std::cout << '_';
		std::cout << std::endl;
		index = 0;
		while (index < _num_of_contacts)
		{
			_contacts[index].ft_print_short(index);
			for (i = 0; i < 45; i++)
				std::cout << '_';
			std::cout << std::endl;
			index++;
		}
		while (index >= _num_of_contacts || index < 0)
		{
			std::cout << "Enter the index of the contact that you need: ";
			index = ft_read_int();
			if (index < 0 || index >= _num_of_contacts)
				std::cout << "No such contact, try again" << std::endl;
			else
				_contacts[index].ft_print_all();
		}
	}
}
std::string Phonebook::ft_readline(void)
{
	std::string str;
	char ch = getchar();
	while (ch != '\n')
	{
		if (ch == EOF)
			exit(0);
		str += ch;
		ch = getchar();
	}
	return str;
}

int Phonebook::ft_read_int(void)
{
	int num;
	int not_num;
	int digits;

	num = 0;
	not_num = 0;
	digits = 0;
	char ch = getchar();
	while (ch != '\n')
	{
		if (ch == EOF)
			exit(0);
		if (!isdigit(ch))
			not_num = 1;
		digits++;
		num *=10;
		num += ch - 48;
		ch = getchar();
	}
	if (not_num != 0 || digits == 0)
		return -1;
	return num;
}
