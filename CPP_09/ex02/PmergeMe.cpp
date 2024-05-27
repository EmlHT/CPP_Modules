/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/27 16:02:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <climits>

PmergeMe::PmergeMe( void )
{
}

PmergeMe::PmergeMe( const PmergeMe &src )
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &	PmergeMe::operator=( const PmergeMe &rhs )
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

char const      *PmergeMe::Error::what() const throw() {
    return "Error";
}