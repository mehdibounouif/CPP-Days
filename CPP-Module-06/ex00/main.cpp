/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:47:35 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/29 13:43:23 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	onlyDigits(const std::string &a, int index)
{
	return (a.find_first_not_of("0123456789", index) == std::string::npos);
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

bool checkDouble(const std::string &a)
{
	int sign;
	int index;
	int dot;

	dot = a.find('.');
	if (a.size() <= 2
			|| dot == std::string::npos)
		return (false);

	sign = a.find('-');
	index = 0;

	if (sign != 0 && sign != std::string::npos)
		return (false);
	else if (sign == 0)
		index = 1;
	
	if (a.substr(dot + 1).size() != 2)
		return (false);

	std::string decimal = a.substr(index, dot);
	std::string fraction = a.substr(dot + 1, 1);

	if (!onlyDigits(decimal,0) || !onlyDigits(fraction,0))
		return (false);

	std::cout << decimal << std::endl;
	std::cout << fraction << std::endl;
	return (true);
}
#include <stdio.h>
bool checkFloat(const std::string &a, int flag)
{
	int sign;
	int index;
	int dot;
	int min_size;

	min_size = flag == 1 ? 3 : 2;
	printf("min_size = %d\n", min_size);
	dot = a.find('.');
	if (a.size() <= min_size
			|| (a[a.size() - 1] != 'f' && flag)
			|| dot == std::string::npos)
		return (false);

	sign = a.find('-');
	index = 0;

	if (sign != 0 && sign != std::string::npos)
		return (false);
	else if (sign == 0)
		index = 1;
		
	std::cout << a.substr(dot + 1) << std::endl;
	if (a.substr(dot + 1).size() != 2 && flag)
		return (false);

	std::string decimal = a.substr(index, dot);
	std::string fraction = a.substr(dot + 1, 1);

	if (!onlyDigits(decimal,0) || !onlyDigits(fraction,0))
		return (false);

	std::cout << decimal << std::endl;
	std::cout << fraction << std::endl;
	return (true);
}

int	main()
{
	std::string a = "11.2";
	std::string b = "39232093902";

	checkFloat(a, 0);
	std::cout << "==============\n";
	checkDecimal(b);
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
