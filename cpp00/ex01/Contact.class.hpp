#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact
{

public:

	Contact(void);
	~Contact(void);
	void	set_attr(int num, std::string value);
	void ft_print_all(void);
	void ft_print_short(int index);

private:

	std::string _first_name;
	std::string _last_name;
	std::string	_nickname;
	std::string	_login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
};

#endif
