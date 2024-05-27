/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/27 14:58:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <climits>

RPN::RPN( void )
{
}

RPN::RPN( const RPN &src )
{
	*this = src;
}

RPN::~RPN()
{
}

RPN &	RPN::operator=( const RPN &rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

int charToInt(const char &str)
{
    int result = 0;
    std::istringstream iss(&str);
    iss >> result;
    return result;
}

int stringToInt(const std::string& str)
{
    int result = 0;
    std::istringstream iss(str);
    iss >> result;
    return result;
}

void	RPN::parseInput(std::string &input)
{
	int i = 0;
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (!std::isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/' && *it != ' ')
			throw Error();
		if (i % 2 != 0 && *it != ' ')
			throw Error();
		if (i % 2 == 0 && *it == ' ')
			throw Error();
		i++;
	}
}

void	RPN::calculation(char sign)
{
	if (_stack.size() < 2)
		throw Error();
	int val1 = this->_stack.top();
	this->_stack.pop();
	int val2 = this->_stack.top();
	this->_stack.pop();
	int i = 0;
    const char     signList[4] = {'+', '-', '*', '/'};
    for (i = 0; i != 4; i++)
    {
        if (signList[i] == sign)
            break ;
    }
	if (i == 4)
		throw Error();
    switch (i)
    {
        case 0:
            this->_stack.push(val2 + val1);
			if (this->_stack.top() > INT_MAX || this->_stack.top() < INT_MIN)
				throw Error();
			break;
        case 1:
            this->_stack.push(val2 - val1);
			if (this->_stack.top() > INT_MAX || this->_stack.top() < INT_MIN)
				throw Error();
			break;
        case 2:
            this->_stack.push(val2 * val1);
			if (this->_stack.top() > INT_MAX || this->_stack.top() < INT_MIN)
				throw Error();
			break;
        case 3:
			if (val1 == 0) {
				throw Error();
			}
            this->_stack.push(val2 / val1);
			if (this->_stack.top() > INT_MAX || this->_stack.top() < INT_MIN)
				throw Error();
            break ;
        default:
            throw Error();
    }
}

void	RPN::fillStack(std::string &input)
{
	int i = 0;
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (std::isdigit(*it))
			this->_stack.push(charToInt(*it));
		else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			calculation(*it);
		i++;
	}
	if (_stack.size() != 1)
		throw Error();
	std::cout << _stack.top() << std::endl;
}

char const      *RPN::Error::what() const throw() {
    return "Error";
}