/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:24:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 11:04:10 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl << std::endl;
}


Ice::Ice( const Ice &src )
{
	*this = src;
	std::cout << "Ice Copy constructor called" << std::endl << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &	Ice::operator=( const Ice &rhs )
{
	std::cout << "Ice Copy assignment operator called" << std::endl << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}
