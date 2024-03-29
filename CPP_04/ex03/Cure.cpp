/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:24:24 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 11:03:43 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl << std::endl;
}

Cure::Cure( const Cure &src )
{
	*this = src;
	std::cout << "Cure Copy constructor called" << std::endl << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure &	Cure::operator=( const Cure &rhs )
{
	std::cout << "Cure Copy assignment operator called" << std::endl << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << " heals " << target.getName() << "'s wounds" << std::endl;
}