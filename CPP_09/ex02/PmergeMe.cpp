/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/28 15:30:58 by ehouot           ###   ########.fr       */
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

unsigned int PmergeMe::charToUInt(const char *str)
{
    unsigned int result = 0;
    std::istringstream iss(str);
    iss >> result;
    if (result > INT_MAX || result < 0)
        throw Error();
    return result;
}

void    PmergeMe::parseInput(char **argv)
{
    std::ostringstream buffer;

    buffer << "Before : ";
    for (int i = 1; argv[i]; i++)
	{
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
                throw Error();
        }
        unsigned int value = charToUInt(argv[i]);
        buffer << value << " ";
        this->_vect.push_back(value);
        this->_deque.push_back(value);
	}
    std::cout << buffer.str() << std::endl;
}

void    PmergeMe::sortAndDisplay(void)
{
    float vecTime = sortFordJohnson(this->_vect);
    float dequeTime = sortFordJohnson(this->_deque);
    std::cout << "After : ";
    std::vector<unsigned int>::const_iterator it = this->_vect.begin();
    std::vector<unsigned int>::const_iterator ite = this->_vect.end();
    for (it = this->_vect.begin(); it != ite; it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << this->_vect.size() << " elements with std::vector : " << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << this->_deque.size() << " elements with std::deque : " << dequeTime << " us" << std::endl;
}

template <typename Type>
float    PmergeMe::sortFordJohnson(Type &container)
{
    typename Type::const_iterator it = container.begin();
    typename Type::const_iterator ite = container.end();
    for (int i = 0; i < container.size() / 2; i++)
        it++;
    typename Type::const_iterator mid = it;
    
}

char const      *PmergeMe::Error::what() const throw() {
    return "Error";
}
