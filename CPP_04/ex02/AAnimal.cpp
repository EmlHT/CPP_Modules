/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:16:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 12:59:42 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type) : _type(type)
{
	std::cout << "AAnimal Parametric constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &src ) : _type(src._type)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=( const AAnimal &rhs )
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}

void		AAnimal::setType( std::string type )
{
	this->_type = type;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "Common sound of an animal" << std::endl;
}
