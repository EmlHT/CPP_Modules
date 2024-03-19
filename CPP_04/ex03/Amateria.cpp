/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:42:40 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 16:46:50 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("AMateria")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria( std::string type) : _type(type)
{
	std::cout << "AMateria Parametric constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &src ) : _type(src._type)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &	AMateria::operator=( const AMateria &rhs )
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
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