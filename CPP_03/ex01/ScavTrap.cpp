/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:18:51 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/13 12:53:52 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("NoName"), _health(10), _energy(10), _attack(0)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "ScavTrap Parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src ) : _name(src._name), _health(src._health), _energy(src._energy), _attack(src._attack)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap &rhs )
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}
