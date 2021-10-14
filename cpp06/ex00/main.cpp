#include <iostream>
#include <iomanip>

int itsChar(std::string str)
{
	char	ch;
	int		i;
	float	f;
	double	d;

	ch = str[0];
	i = static_cast<int>(ch);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	std::cout << "Char : '" << ch << "'" << std::endl;
	std::cout << "Int : " << i << std::endl;
	std::cout << "Float : " << f << ".0f" << std::endl;
	std::cout << "Double : " << d << ".0" << std::endl;
	return 0;
}

void toChar(std::string str)
{
	char ch;

	std::cout << "Char : ";
	if (str.length() == 1 && !isdigit(str[0]))
		std::cout << "'" << str[0] << "'" << std::endl;
	else
	{
		try
		{
			int i = std::stoi(str);
			if (i < 0 || i > 127)
				std::cout << "impossible" << std::endl;
			else if (i < 32 || i == 127)
				std::cout << "Non displayable" << std::endl;
			else
			{
				ch = static_cast<char>(i);
				std::cout << "'" << ch << "'" << std::endl;
			}
		}
		catch (std::exception & e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
}

void toInt(std::string str)
{
	std::cout << "Int : ";
	try
	{
		int i = std::stoi(str);
		std::cout << i << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void toFloat(std::string str)
{
	std::cout << "Float : ";
	try
	{
		float f = std::stof(str);
		if (static_cast<double>(static_cast<int>(f)) == f)
			std::cout << std::fixed << std::setprecision(1) << f;
		else
			std::cout << f;
		std::cout << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void toDouble(std::string str)
{
	std::cout << "Double : ";
	try
	{
		double d = std::stod(str);
		if (static_cast<double>(static_cast<int>(d)) == d)
			std::cout << std::fixed << std::setprecision(1) << d << std::endl;
		else
			std::cout << d << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	if (str.length() == 1 && !isdigit(str[0]))
		return itsChar(str);
	toChar(str);
	toInt(str);
	toFloat(str);
	toDouble(str);
	return 0;
}
