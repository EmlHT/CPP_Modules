/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:42:40 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 11:03:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("AMateria")
{
	std::cout << "AMateria Default constructor called" << std::endl << std::endl;
}

AMateria::AMateria( std::string const &  type) : _type(type)
{
	std::cout << "AMateria Parametric constructor called" << std::endl << std::endl;
}

AMateria::AMateria( const AMateria &src )
{
	*this = src;
	std::cout << "AMateria Copy constructor called" << std::endl << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &	AMateria::operator=( const AMateria &rhs )
{
	std::cout << "AMateria Copy assignment operator called" << std::endl << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

const std::string&	AMateria::getType( void ) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
		std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
	else if (this->getType() == "cure")
		std::cout << " heals " << target.getName() << "'s wounds" << std::endl;
}

