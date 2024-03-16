/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:38:49 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/16 12:08:06 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain &src ) : _ideas(src._ideas)
{
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &	Brain::operator=( const Brain &rhs )
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string	Brain::getIdeas( void ) const
{
	return (*this->_ideas);
}
