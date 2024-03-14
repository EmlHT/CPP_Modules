/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:18:51 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/14 13:21:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	this->setHealthStart(100);
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	this->setHealthStart(100);
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout << "ScavTrap Parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	this->setHealthStart(src.getGlobal().healthStart);
	this->setName(src.getGlobal().name);
	this->setHealth(src.getGlobal().health);
	this->setEnergy(src.getGlobal().energy);
	this->setAttack(src.getGlobal().attack);
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

void	ScavTrap::guardGate( void )
{
	if (this->getGlobal().health > 0)
		std::cout << "ScavTrap " << this->getGlobal().name << " is now in Gate keeper mode." << std::endl << std::endl;
	else
		std::cout << "ScavTrap " << this->getGlobal().name << " can't be in Gate keeper mode because he is dead." << std::endl << std::endl;
}
