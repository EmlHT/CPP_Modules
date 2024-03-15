/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:16:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 17:32:03 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string type) : _type(type)
{
	std::cout << "Animal Parametric constructor called" << std::endl;
}

Animal::Animal( const Animal &src ) : _type(src._type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &	Animal::operator=( const Animal &rhs )
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Common sound of an animal" << std::endl;
}
