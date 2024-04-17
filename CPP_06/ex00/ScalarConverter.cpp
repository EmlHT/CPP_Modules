/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:04:14 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/17 18:43:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits.h>
#include <cstdlib>
#include <cctype>
#include <string>
#include <float.h>
#include <cmath>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter( const ScalarConverter &src )
{
	*this = src;
	// std::cout << "ScalarConverter Copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter & ScalarConverter::operator=( const ScalarConverter &rhs )
{
    // std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

static void convertChar( std::string &literal )
{
	char c = literal[0];
	if (!isprint(c))
		std::cout << "char : Non displayable" << std::endl;
	else if ((c >= 32 && c <= 126) && (c < 0 || c > 126))
		std::cout << "char : Impossible" << std::endl;
	else
    	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
}

static void convertInt( std::string &literal )
{
	char	*endptr;
	int i = strtol(literal.c_str(), &endptr, 10);

	if (!isprint(i))
		std::cout << "char : Non displayable" << std::endl;
	else if ((i >= 32 && i <= 126) && (i < 0 || i > 126))
		std::cout << "char : Impossible" << std::endl;
	else
    	std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	std::cout << "float : " << static_cast<float>(i) << ".0f"  << std::endl;
	std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}

static void convertFloat( std::string &literal )
{
	char	*endptr;
	float f = strtof(literal.c_str(), &endptr);

	if (!isprint(static_cast<int>(f)))
		std::cout << "char : Non displayable" << std::endl;
	else if ((f >= 32 && f <= 126) && (static_cast<int>(f) < 0 || static_cast<int>(f) > 126))
		std::cout << "char : Impossible" << std::endl;
    else
		std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
	if (static_cast<int>(f) > INT_MAX || static_cast<int>(f) < INT_MIN)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(f) << std::endl;
    if (f < -FLT_MAX || f > FLT_MAX)
		std::cout << "float : Impossible";
	else
	{
		int i = -1;
		bool pointFound = false;
		
		while (literal[++i])
		{
			if (pointFound == true)
			{
				if (isdigit(literal[i]) && literal[i] != '0')
				{
					std::cout << "float : " << f << "f" << std::endl;
					break;
				}
			}
			if (literal[i] == '.')
				pointFound = true;	
		}
		if (pointFound == false)
			std::cout << "float : " << f << ".0f" << std::endl;
	}
	if (f < -DBL_MAX || f > DBL_MAX)
		std::cout << "double : Impossible";
	else
	{
		int i = -1;
		bool pointFound = false;
		
		while (literal[++i])
		{
			if (pointFound == true)
			{
				if (isdigit(literal[i]) && literal[i] != '0')
				{
					std::cout << "double : " << static_cast<double>(f) << std::endl;
					break;
				}
			}
			if (literal[i] == '.')
				pointFound = true;	
		}
		if (pointFound == false)
			std::cout << "double : " << static_cast<double>(f) << ".00" << std::endl;
	}
}

static void convertDouble( std::string &literal )
{
	char	*endptr;
	double d = strtod(literal.c_str(), &endptr);

	if (!isprint(static_cast<int>(d)))
		std::cout << "char : Non displayable" << std::endl;
	else if ((d >= 32 && d <= 126) && (static_cast<int>(d) < 0 || static_cast<int>(d) > 126))
		std::cout << "char : Impossible" << std::endl;
	else
    	std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(d) << std::endl;
    if (d < -FLT_MAX || d > FLT_MAX)
		std::cout << "float : Impossible";
	else
	{
		int i = -1;
		bool pointFound = false;
		
		while (literal[++i])
		{
			if (pointFound == true)
			{
				if (isdigit(literal[i]) && literal[i] != '0')
				{
					std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
					break;
				}
			}
			if (literal[i] == '.')
				pointFound = true;	
		}
		if (pointFound == false)
			std::cout << "float : " << static_cast<float>(d) << ".0f" << std::endl;
	}
	if (d < -DBL_MAX || d > DBL_MAX)
		std::cout << "double : Impossible";
	else
	{
		int i = -1;
		bool pointFound = false;
		
		while (literal[++i])
		{
			if (pointFound == true)
			{
				if (isdigit(literal[i]) && literal[i] != '0')
				{
					std::cout << "double : " << d << std::endl;
					break;
				}
			}
			if (literal[i] == '.')
				pointFound = true;	
		}
		if (pointFound == false)
			std::cout << "double : " << d << ".00" << std::endl;
	}
}

std::string parseLiteral( std::string &literal )
{
	if (isalpha(literal[0]) && literal.length() == 1)
		return ("CHAR");
	int countDot = 0;
    for (int i = 0; i < static_cast<int>(literal.length()); i++)
	{
        if (literal[i] == '.') {
            countDot++;
        }
		if (i + 1 == static_cast<int>(literal.length()) && literal[i] == 'f' && isdigit(literal[i - 1]) && countDot == 1 && literal[0] != '.')
			return ("FLOAT");
		else if (isalpha(literal[i])) {
            return ("UNDEFINED");
        }
    }
	if (countDot == 1)
		return ("DOUBLE");
	else if (countDot == 0)
		return ("INT");
	return ("UNDEFINED");
}

void	weirdType( std::string &literal )
{
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return;
	}
	else if (literal == "-inff" || literal == "+inff" || literal == "+inf" || literal == "-inf")
	{
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		if (literal == "-inff" || literal == "+inff")
		{
			std::cout << "float : " << literal << std::endl;
			if (literal == "-inff")
				std::cout << "double : -inf" << std::endl;
			else
				std::cout << "double : +inf" << std::endl;
		}
		else
		{
			std::cout << "float : " << literal << "f" <<  std::endl;
			std::cout << "double : " << literal << std::endl;
		}
		return;
	}
}

void    ScalarConverter::convert( std::string &literal )
{
	weirdType(literal);
	std::string type = parseLiteral(literal);
	int i = 0;
	std::string type_list[4] = {"CHAR", "INT", "FLOAT", "DOUBLE"};
	for (i = 0; i < 4; i++)
	{
		if (type_list[i] == type)
			break ;
	}
    switch (i)
	{
		case 0:
			return convertChar(literal);
			break;
		case 1:
			return convertInt(literal);
			break;
		case 2:
			return convertFloat(literal);
			break;
		case 3:
			return convertDouble(literal);
			break;
		default:
			std::cout << "char : Invalid argument\nint : Invalid argument\nfloat : Invalid argument\ndouble : Invalid argument" << std::endl;
	}
	return;
}
