/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:35:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 15:15:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	this->setHealthStart(100);
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	this->setHealthStart(100);
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttack(30);
	std::cout << "FragTrap Parametric constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap(src)
{
	this->setHealthStart(src.getGlobal().healthStart);
	this->setName(src.getGlobal().name);
	this->setHealth(src.getGlobal().health);
	this->setEnergy(src.getGlobal().energy);
	this->setAttack(src.getGlobal().attack);
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=( const FragTrap &rhs )
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getGlobal().energy <= 0)
		std::cout << "[FragTrap] No more energy, impossible to attack." << std::endl;
	else
	{
		std::cout << "FragTrap " << this->getGlobal().name << " attacks " << target << ", causing " << this->getGlobal().attack << " points of damage!" << std::endl;
		setEnergy(this->_energy - 1);
		std::cout << "FragTrap " << this->getGlobal().name << " has now " << this->getGlobal().energy << " energy." << std::endl;
	}
	std::cout << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->getGlobal().health > 0)
		std::cout << "FragTrap " << this->getGlobal().name << " want to highfive with you !" << std::endl << std::endl;
	else
		std::cout << "FragTrap " << this->getGlobal().name << " can't do high five because he is dead." << std::endl << std::endl;
}
