/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:42:37 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 10:19:29 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( std::string type) : AAnimal(type)
{
	std::cout << "Dog Parametric constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog &src ) : AAnimal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &	Dog::operator=( const Dog &rhs )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		delete this->_brain;
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouaf ! Wouaf !" << std::endl;
}
