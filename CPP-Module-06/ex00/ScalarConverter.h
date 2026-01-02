/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:41:22 by mbounoui          #+#    #+#             */
/*   Updated: 2026/01/02 20:56:35 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_
#define _SCALARCONVERTER_

#include <limits>
#include <iostream>
#include <cstdlib>
#include <cmath>

class ScalarConverter 
{
	public:
	static void	convert(std::string &input);
};

// CONVERT
void	toChar(long double num);
void	toInt(const std::string &input, long double num);
void	toFloat(const std::string &input, long double num);
void	toDouble(const std::string &input, long double num);
void	convertNumbers(const std::string &input, long double num);
void	convertChar(char input);
void	convertNanInfinit(const std::string &input);

// CHECK
int	onlyDigits(const std::string &a, int index);
bool	chekcChar(const std::string &str);
bool checkDecimal(const std::string &str);
bool checkFloatPoint(const std::string &a, int flag);
bool	checkNanInfinit(const std::string &input);
#endif
