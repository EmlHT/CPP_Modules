/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:04:14 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/12 16:47:49 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits.h>
#include <cstdlib>
#include <cctype>
#include <string>
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
	if (isalpha(static_cast<int>(literal)) == )
    if (literal.length() != 1)
    {
        std::cout << "char : Impossible" << std::endl;
        return ;
    }
    if (!isprint((literal)))
    {
		std::cout << "char : Non displayable" << std::endl;
		return ;
    }
    std::cout << "char : " << static_cast<char>(literal) << std::endl;
}

static void convertInt( std::string &literal )
{
	char	*endptr;
	int		conv = 0;

	if (!literal.empty() && literal[literal.length() - 1] == 'f')
		literal.erase(literal.length() - 1);
	if (!literal.empty() && literal)
	if (literal[0] != '-' && literal[0] != '+' && !isdigit(literal[0]))
		std::cout << "int : Impossible" << std::endl;
	int conv = strtol(literal.c_str(), &endptr, 10);
	conv = floor(conv);
	if (*endptr == '\0')
		std::cout << "int : Impossible" << std::endl;
	std::cout << "int : " << conv << std::endl;
	
	// if (literal[0] == '-')
	// {
	// 	sign = -1;
	// 	i++;
	// }
	// else if (literal[0] == '+')
	// 	i++;
	
	// while (literal[++i])
	// {
	// 	conv += atoi(&literal[i]) * mult;
	// 	if (conv > INT_MAX || conv < INT_MIN)
	// 	{
	// 		std::cout << "int : Impossible" << std::endl;
	// 		return ;
	// 	}
	// 	mult *= 10;
	// }
}

static void convertFloat( std::string &literal )
{
    
}

static void convertDouble( std::string &literal )
{
    
}

void    ScalarConverter::convert( std::string &literal )
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
    convertChar(literal);
    convertInt(literal);
    convertFloat(literal);
    convertDouble(literal);
}
