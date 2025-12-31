#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return (*this);
}
ScalarConverter::~ScalarConverter(){}


void	ScalarConverter::convert(std::string &input)
{
	long double num = std::strtold(input.c_str(), NULL);
	
	if (checkDecimal(input))
		convertNumbers(input, num);
	else if (checkFloatPoint(input, 1)) // float
		convertNumbers(input, num);
	else if (checkFloatPoint(input, 0)) // double
		convertNumbers(input, num);
	else if (chekcChar(input))
		convertChar(input);
	else if (checkNanInfinit(input))
		convertNanInfinit(input);
	else 
		std::cout << "invalid type!" << std::endl;
}

