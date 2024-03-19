/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:09:08 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 13:12:15 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( std::string type) : AAnimal(type)
{
	std::cout << "Cat Parametric constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat &src ) : AAnimal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &	Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miiiiiaaaaaoouuuuuu" << std::endl;
}
