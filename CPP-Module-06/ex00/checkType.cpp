/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:41:34 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/05 17:21:16 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

	if (str.find('-') != 0 && str.find('-') != std::string::npos)
		return (false);
	else if (str.find('-') == 0)
		index = 1;
	else 
		index = 0;

	if (!onlyDigits(str, index) || str.empty())
		return (false);

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
		else if (a.find('-') == 0)
			index = 1;
		else 
			index = 0;

		if ((flag && a[a.size() - 1] != 'f') || (!flag && a[a.size() - 1] == 'f'))
			return (false);

		decimal = a.substr(index, dot - index);
		fraction = flag ? 
				a.substr(dot + 1, a.size() - (dot + 2)) :
				a.substr(dot + 1);

		if (!onlyDigits(decimal, index) || !onlyDigits(fraction, index))
			return (false);

		return (true);
	}
	return (false);
}


bool	checkNanInfinit(const std::string &input)
{
	return (input == "nan" || input == "-inf" || input == "+inf"
			|| input == "nanf" || input == "-inff" || input == "+inff");
}
