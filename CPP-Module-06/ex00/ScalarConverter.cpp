#include "ScalarConverter.h"

void	ScalarConverter::convert(std::string &input)
{
	if (checkDecimal(input))
		convertNumbers(input);
	else if (checkFloatPoint(input, 1)) // float
		convertNumbers(input);
	else if (checkFloatPoint(input, 0)) // double
		convertNumbers(input);
	else if (chekcChar(input))
		convertChar(input);
	else if (checkNanInfinit(input))
		convertNanInfinit(input);
}

