/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:47:35 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/30 17:50:29 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

int	main(int c, char **v)
{
	if (c != 2)
		std::cout << "Invalid args!" << std::endl;
	else 
	{
		std::string input = v[1];
		ScalarConverter::convert(input);
	}

//	std::string a = "11.2f";
//	checkFloatPoint(a, 1);
//
//	std::cout << "==============\n";
//
//	std::string b = "39232093902";
//	checkDecimal(b);
//
//	double c = 1.0 / 0.0;
//	std::cout << c << std::endl;
//
//	double d = -1.0 / 0.0;
//	std::cout << d << std::endl;
//
//	float e = 1.0 / 0.0;
//	std::cout << e << std::endl;
//
//	float f = -1.0 / 0.0;
//	std::cout << f << std::endl;
//
//	double j = 0.0 / 0.0;
//	std::cout << j << std::endl;
//
//	float h = 0.0 / 0.0;
//	std::cout << h << std::endl;
//
//	std::cout << sqrt(-1) << std::endl;
}
