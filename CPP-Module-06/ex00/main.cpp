/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:47:35 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/02 22:02:49 by mbounoui         ###   ########.fr       */
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
}
