#include "Contact.class.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_attr(int num, const std::string value)
{
	switch (num)
	{
		case 0:
			this->_first_name = value;
			break;
		case 1:
			this->_last_name = value;
			break;
		case 2:
			this->_nickname = value;
			break;
		case 3:
			this->_login = value;
			break;
		case 4:
			this->_postal_address = value;
			break;
		case 5:
			this->_email_address = value;
			break;
		case 6:
			this->_phone_number = value;
			break;
		case 7:
			this->_birthday_date = value;
			break;
		case 8:
			this->_favorite_meal = value;
			break;
		case 9:
			this->_underwear_color = value;
			break;
		case 10:
			this->_darkest_secret = value;
			break;
		default:
			break;
	}
}


void	Contact::ft_print_all(void)
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Login: " << _login << std::endl;
	std::cout << "Postal address: " << _postal_address << std::endl;
	std::cout << "Email address: " << _email_address << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Birthday date: " << _birthday_date << std::endl;
	std::cout << "Favorite meal: " << _favorite_meal << std::endl;
	std::cout << "Underwear color: " << _underwear_color << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

void	Contact::ft_print_short(int index)
{
	std::string	first;
	std::string	last;
	std::string	nick;

	first = _first_name;
	last = _last_name;
	nick = _nickname;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << index << "|";
	if (first.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << first << "|";
	}
	else
		std::cout << first.substr(0, 9) << ".|";
	if (last.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << last << "|";
	}
	else
		std::cout << last.substr(0, 9) << ".|";
	if (nick.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << nick << "|";
	}
	else
		std::cout << nick.substr(0, 9) << ".|";
	std::cout << std::endl;
}
