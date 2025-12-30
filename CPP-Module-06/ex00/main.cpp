/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:47:35 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/30 14:17:31 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	onlyDigits(const std::string &a, int index)
{
	return (a.find_first_not_of("0123456789", index) == std::string::npos);
}

bool	chekcChar(const std::string &str)
{
	return (str.size() == 1 && str.isprint(str[0]) && !str.isdijit(str[0]));
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
	std::cout << str << std::endl;
	return (true);
}

bool checkFloatPoint(const std::string &a, int flag)
{
	int sign;
	int index;
	int dot;
	int min_size;
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

		std::cout << a << std::endl;
		std::cout << decimal << std::endl;
		std::cout << fraction << std::endl;
		return (true);
	}
	return (false);
}

bool	checkNanInfinit(const std::string &r)
{
	return (r == "nan" || r == "-inf" || r == "+inf"
			|| r == "nanf" || r == "-inff" || r == "+inff");
}

#include <cmath>

int	main()
{
	std::string a = "11.2f";
	checkFloatPoint(a, 1);

	std::cout << "==============\n";

	std::string b = "39232093902";
	checkDecimal(b);

	double c = 1.0 / 0.0;
	std::cout << c << std::endl;

	double d = -1.0 / 0.0;
	std::cout << d << std::endl;

	float e = 1.0 / 0.0;
	std::cout << e << std::endl;

	float f = -1.0 / 0.0;
	std::cout << f << std::endl;

	double j = 0.0 / 0.0;
	std::cout << j << std::endl;

	float h = 0.0 / 0.0;
	std::cout << h << std::endl;

	std::cout << sqrt(-1) << std::endl;

//	const size_t signal = a.find('-');
//	// found but not in the start
//	if (signal != 0 && signal != std::string::npos)
//		std::cout << "amazing" << std::endl;
//	// not found 
//	if (signal == std::string::npos)
//		std::cout << "not found " << signal << std::endl;
//	// found
//	else if (signal == 0)
//		std::cout << "found " << signal << std::endl;
//
//	int index;
//	if (signal == 0)
//		index = 1;
//	else 
//		index = 0;
//	const size_t dot = a.find('.');
//	std::cout << dot << std::endl;
//	// print decimal part
//	std::cout << a.substr(index, dot - index) << std::endl;
//
//
//	// print fraction part
//	std::cout << a.substr(dot + 1);
}
