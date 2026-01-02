/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:41:50 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/02 22:01:01 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	(void)input;
	if (num < std::numeric_limits<int>::min() ||
			num > std::numeric_limits<int>::max())
		std::cout << "int: overflows" << std::endl;
	else 
		std::cout << "int: " << static_cast<int>(num) << std::endl;
}

void	toFloat(const std::string &input, long double num)
{
	(void)input;
	if (num < -3.40282e+38 ||
			num > std::numeric_limits<float>::max())
		std::cout << "float: overflows" << std::endl;
	else 
	{
		std::cout << "float: " << static_cast<float>(num);
		if (num == static_cast<int>(num))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void	toDouble(const std::string &input, long double num)
{
	(void)input;
	if (num < -1.79769e+308 || 
			num > std::numeric_limits<double>::max())
		std::cout << "double: overflows" << std::endl;
	else 
	{
		std::cout << "double: " << static_cast<double>(num);
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

void	convertChar(char input)
{
	std::cout << "char: " << input << std::endl;
	std::cout << "int: " << static_cast<int>(input) << std::endl;
	std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << ".0" << std::endl;
}

void	convertNanInfinit(const std::string &input)
{
	std::cout << "char: inpossible" << std::endl;
	std::cout << "int: inpossible" << std::endl;
	if (input == "nan" || input == "-inf" || input == "+inf")
	{
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
	}
	else 
	{
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input.substr(0, input.size() - 1) << std::endl;
	}
}
