/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:42:37 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 13:44:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( std::string type) : Animal(type)
{
	std::cout << "Dog Parametric constructor called" << std::endl;
}

Dog::Dog( const Dog &src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &	Dog::operator=( const Dog &rhs )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}
