#include "ScalarConverter.h"

void	toChar(long double num)
{
	if (num < std::numeric_limits<char>::min()
			|| num > std::numeric_limits<char>::max())
		std::cout << "char: overflows" << std::endl;
	else if (!std::isprint(static_cast<char>(num)))
		std::cout << "char: " << "Non displayable" << std::endl;
	else 
		std::cout << "char: " << static_cast<char>(num) << std::endl;
}

void	toInt(const std::string &input, long double num)
{
	if (num < std::numeric_limits<int>::min() ||
			num > std::numeric_limits<int>::max())
		std::cout << "int: overflows" << std::endl;
	else 
		std::cout << "int: " << std::atoi(input.c_str()) << std::endl;
}

void	toFloat(const std::string &input, long double num)
{
	if (num < std::numeric_limits<float>::min() ||
			num > std::numeric_limits<float>::max())
		std::cout << "float: overflows" << std::endl;
	else 
	{
		std::cout << "float: " << std::strtof(input.c_str(), NULL);
		if (num == static_cast<int>(num))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void	toDouble(const std::string &input, long double num)
{
	if (num < std::numeric_limits<double>::min() || 
			num > std::numeric_limits<double>::max())
		std::cout << "double: overflows" << std::endl;
	else 
	{
		std::cout << "double: " << std::strtod(input.c_str(), NULL);
		if (num == static_cast<int>(num))
			std::cout << ".0" << std::endl;
	}
}

void	convertNumbers(const std::string &input, long double num)
{
	toChar( num);
	toInt(input, num);
	toFloat(input, num);
	toDouble(input, num);
}

void	convertChar(const std::string &input, long double num)
{
	std::cout << "char: " << input << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	std::cout << "float: " << static_cast<float>(num) << std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	convertNanInfinit(const std::string &input)
{
	std::cout << "char: inpossible" << std::endl;
	std::cout << "int: inpossible" << std::endl;
	std::cout << "float: " << input << "f" << std::endl;
	std::cout << "double: " << input << std::endl;
}
