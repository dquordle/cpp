#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class Phonebook
{

public:

	Phonebook(void);
	~Phonebook(void);
	void ft_add(void);
	void ft_search(void);
	std::string ft_readline(void);

private:

	Contact _contacts[8];
	int _num_of_contacts;
	void ft_get_set(std::string attr, int num);
	int ft_read_int(void);
};

#endif
