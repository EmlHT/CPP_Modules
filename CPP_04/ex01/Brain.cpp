/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:38:49 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/18 18:32:29 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
	*this = src;
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &	Brain::operator=( const Brain &rhs )
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdeas( void ) const
{
	return (*this->_ideas);
}
