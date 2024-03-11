/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:39:01 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/11 20:58:38 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("NoName"), _health(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "Parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) : _name(src._name), _health(src._health), _energy(src._energy), _attack(src._attack)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=( const ClapTrap &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

ClapTrap::GlobalInfo	ClapTrap::getGlobal( void ) const
{
	GlobalInfo	info;
	info.name = _name;
	info.health = _health;
	info.energy = _energy;
	info.attack = _attack;
	return info;
}

void	ClapTrap::setEnergy( int energy )
{
	this->_energy = energy;
}
void	ClapTrap::setAttack( int attack )
{
	this->_attack = attack;
}
void	ClapTrap::setHealth( int health )
{
	this->_health = health;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getGlobal().energy <= 0)
		std::cout << "No more energy, impossible to attack." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getGlobal().name << " attacks " << target << ", causing " << this->getGlobal().attack << " points of damage!" << std::endl;
		setEnergy(this->_energy - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getGlobal().name << " is being attacked, taking " << amount << " points of damage!" << std::endl;
	setHealth(this->_health - amount);
	std::cout << "ClapTrap has now " << this->getGlobal().health << " HP." << std::endl;
	if (this->getGlobal().health <= 0)
		std::cout << "ClapTrap " << this->getGlobal().name << " is broken..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	realAmount = amount;
	if (this->getGlobal().health >= 10)
		std::cout << "ClapTrap " << this->getGlobal().name << " is already full life, no repair required." << std::endl;
	else
	{
		setEnergy(this->_energy - 1);
		if (this->getGlobal().health + amount > 10)
			realAmount = 10 - this->getGlobal().health;
		setHealth(this->_health + amount);
		std::cout << "ClapTrap " << this->getGlobal().name << " is repairing " << realAmount << ". (" << this->getGlobal().name << " got now " << this->getGlobal().health << " HP)." << std::endl;
	}
}
