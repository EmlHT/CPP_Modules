/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:09:08 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 18:49:53 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Parametric constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=( const WrongCat &rhs )
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miiiiiaaaaaoouuuuuu" << std::endl;
}
