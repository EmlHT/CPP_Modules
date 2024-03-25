/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:24:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/25 13:35:37 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice( std::string const &  type) : AMateria(type)
{
	std::cout << "Ice Parametric constructor called" << std::endl;
}

Ice::Ice( const Ice &src ) : AMateria(src._type)
{
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &	Ice::operator=( const Ice &rhs )
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
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
