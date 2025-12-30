
#include <iostream>
#include <string.h>

#include "ScalarConverter.h"
int	onlyDigits(const std::string &a, int index)
{
	return (a.find_first_not_of("0123456789", index) == std::string::npos);
}

bool	chekcChar(const std::string &str)
{
	return (str.size() == 1 && !std::isdigit(str[0]) && std::isprint(str[0]));
}

bool checkDecimal(const std::string &str)
{
	int index;

	index = 0;
	if (str.find('-') != 0 && str.find('-') != std::string::npos)
		return (false);
	else if (str.find('-') == 0)
		index = 1;
	if (!onlyDigits(str, index) || str.empty())
		return (false);
//	std::cout << str << std::endl;
	return (true);
}

bool checkFloatPoint(const std::string &a, int flag)
{
	int index;
	long unsigned int dot;
	long unsigned int min_size;
	std::string decimal;
	std::string fraction;


	if ((dot = a.find('.')) != std::string::npos)
	{
		min_size = flag ? 4: 3;

		if (a.size() < min_size)
			return (false);

		if (a.find('-') != 0 && a.find('-') != std::string::npos)
			return (false);
		else if (a.find('-') != std::string::npos)
			index = 1;
		else 
			index = 0;

		if ((flag && a[a.size() - 1] != 'f') || (!flag && a[a.size() - 1] == 'f'))
			return (false);

		decimal = a.substr(index, dot);
		fraction = flag ? a.substr(dot + 1, 1) : a.substr(dot + 1, a.size() - dot);
		if (!onlyDigits(decimal, index) || ! onlyDigits(fraction, index))
			return (false);

//		std::cout << a << std::endl;
//		std::cout << decimal << std::endl;
//		std::cout << fraction << std::endl;
		return (true);
	}
	return (false);
}

bool	checkNanInfinit(const std::string &input)
{
	return (input == "nan" || input == "-inf" || input == "+inf"
			|| input == "nanf" || input == "-inff" || input == "+inff");
}
