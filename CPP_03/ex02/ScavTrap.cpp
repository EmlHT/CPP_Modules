/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:18:51 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 15:15:24 by ehouot           ###   ########.fr       */
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

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap(src)
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->getGlobal().energy <= 0)
		std::cout << "[ScavTrap] No more energy, impossible to attack." << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->getGlobal().name << " attacks " << target << ", causing " << this->getGlobal().attack << " points of damage!" << std::endl;
		setEnergy(this->_energy - 1);
		std::cout << "ScavTrap " << this->getGlobal().name << " has now " << this->getGlobal().energy << " energy." << std::endl;
	}
	std::cout << std::endl;
}

void	ScavTrap::guardGate( void )
{
	if (this->getGlobal().health > 0)
		std::cout << "ScavTrap " << this->getGlobal().name << " is now in Gate keeper mode." << std::endl << std::endl;
	else
		std::cout << "ScavTrap " << this->getGlobal().name << " can't be in Gate keeper mode because he is dead." << std::endl << std::endl;
}
