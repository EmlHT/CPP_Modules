/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:06:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/02 09:43:35 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span( unsigned int N ) : _N(N) {}

Span::Span( const Span &src )
{
    *this = src;
}

Span::~Span() {}

Span &	Span::operator=( const Span &rhs )
{
    if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void	Span::addNumber( int nb )
{
    if (this->_vec.size() != this->_N)
        this->_vec.push_back(nb);
    else
        throw VectorAlreadyFull();
}

int		Span::shortestSpan( void ) const
{
    if (this->_vec.size() == 0)
        throw ZeroNumberFound();
    else if (this->_vec.size() == 1)
        throw OneNumberFound();
    else
    {
        std::vector<int> sortedVec = this->_vec;
        std::sort(sortedVec.begin(), sortedVec.end());
        std::vector<int>::const_iterator	it = sortedVec.begin();
        std::vector<int>::const_iterator	ite = sortedVec.end();
        int    minGap = *(sortedVec.begin() + 1) - *sortedVec.begin();
        for (it = sortedVec.begin(); it != ite - 1; it++)
        {
            if ((*(it + 1) - *it) < minGap)
                minGap = *(it + 1) - *it;
        }
        return minGap;
    }
}

int		Span::longestSpan( void ) const
{
    if (this->_vec.size() == 0)
        throw ZeroNumberFound();
    else if (this->_vec.size() == 1)
        throw OneNumberFound();
    else
    {
        int min = *std::min_element(this->_vec.begin(), this->_vec.end());
        int max = *std::max_element(this->_vec.begin(), this->_vec.end());
        return (max - min);
    }
}

void    Span::moreNumbers( std::vector<int> newNumbers, unsigned int position )
{
    if(this->_vec.size() + newNumbers.size() > this->_N)
        throw VectorAlreadyFull();
    if (this->_vec.size() < position)
        position = this->_vec.size();
    this->_vec.insert(this->_vec.begin() + position, newNumbers.begin(), newNumbers.end());
}

void	Span::displayVector( void ) const
{
    std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = this->_vec.end();
	for (it = this->_vec.begin(); it != ite; it++)
		std::cout << *it << " ";
    std::cout << std::endl;
}

char const	*Span::VectorAlreadyFull::what() const throw() {
	return "ERROR: The addition exceeds the vector's max size";
}

char const	*Span::ZeroNumberFound::what() const throw() {
	return "ERROR: No number in stock";
}

char const	*Span::OneNumberFound::what() const throw() {
	return "ERROR: Just one number in stock";
}
