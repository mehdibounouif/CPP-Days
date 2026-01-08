/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:41:25 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/03 13:11:06 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

void	ScalarConverter::convert(std::string &input)
{
	long double num = std::strtold(input.c_str(), NULL);
	
	if (chekcChar(input))
		convertChar(input[0]);
	else if (checkDecimal(input))
		convertNumbers(input, num);
	else if (checkFloatPoint(input, 1)) // float
		convertNumbers(input, num);
	else if (checkFloatPoint(input, 0)) // double
		convertNumbers(input, num);
	else if (checkNanInfinit(input))
		convertNanInfinit(input);
	else 
		std::cout << "invalid type!" << std::endl;
}

