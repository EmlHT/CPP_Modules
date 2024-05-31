/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/29 17:36:38 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <climits>
#include <iterator>
#include <ctime>
#include <sys/time.h>

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
    struct timeval start, end;
    gettimeofday(&start, NULL);
    this->_vect = sortFordJohnson(this->_vect);
    gettimeofday(&end, NULL);
    double durationVec = /*(end.tv_sec - start.tv_sec) * 1e6 + */(end.tv_usec - start.tv_usec);
    gettimeofday(&start, NULL);
    this->_deque = sortFordJohnson(this->_deque);
    gettimeofday(&end, NULL);
    double durationDeq = /*(end.tv_sec - start.tv_sec) * 1e6 + */(end.tv_usec - start.tv_usec);
    std::cout << "After vector :  ";
    std::vector<unsigned int>::const_iterator it = this->_vect.begin();
    std::vector<unsigned int>::const_iterator ite = this->_vect.end();
    for (it = this->_vect.begin(); it != ite; it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "After deque :  ";
    std::deque<unsigned int>::const_iterator itd = this->_deque.begin();
    std::deque<unsigned int>::const_iterator ited = this->_deque.end();
    for (itd = this->_deque.begin(); itd != ited; itd++)
        std::cout << *itd << " ";
    std::cout << std::endl; 
    std::cout << "Time to process a range of " << this->_vect.size() << " elements with std::vector : " << durationVec << " us" << std::endl;
    std::cout << "Time to process a range of " << this->_deque.size() << " elements with std::deque : " << durationDeq << " us" << std::endl;
}

template <typename Type>
void    PmergeMe::recursive(typename Type::iterator begin, typename Type::iterator end)
{
    if (std::distance(begin, end) <= 1)
        return ;
    typename Type::iterator it = begin;
    typename Type::iterator ite = end;
    typename Type::iterator mid = begin;
    for (int i = 0; i < std::distance(begin, end) / 2; i++)
        *mid++;
    recursive<Type>(it, mid);
    recursive<Type>(mid, ite);
    std::inplace_merge(begin, mid, end);
}

template <typename Type>
Type    PmergeMe::sortFordJohnson(Type &container)
{
	Type shortestNb;
	Type biggestNb;

    typename Type::iterator ite = container.end();
    for (typename Type::iterator it = container.begin(); it != ite; it++)
	{
        if (!*(it + 1))
        {
            shortestNb.push_back(*it);
            break ;
        }
		if (*it > *(it + 1))
		{
			shortestNb.push_back(*(it + 1));
			biggestNb.push_back(*it);
            *(it++);
		}
        else
        {
            shortestNb.push_back(*it);
            biggestNb.push_back(*(it + 1));
            *(it++);
        }
	}
    recursive<Type>(biggestNb.begin(), biggestNb.end());
    for (typename Type::iterator it = shortestNb.begin(); it != shortestNb.end(); it++)
    {
        typename Type::iterator pos = std::lower_bound(biggestNb.begin(), biggestNb.end(), *it);
        biggestNb.insert(pos, *it);
    }
    return (biggestNb);
}

char const      *PmergeMe::Error::what() const throw() {
    return "Error";
}
