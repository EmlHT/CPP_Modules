/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:29:36 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 11:14:09 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("PNJ")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 10000; i++)
		_ground[i] = NULL;
	std::cout << "Character Default constructor called" << std::endl << std::endl;
}

Character::Character( std::string const &  name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 10000; i++)
		_ground[i] = NULL;
	std::cout << "Character Parametric constructor called" << std::endl << std::endl;
}

Character::Character( const Character &src )
{
	*this = src;
	std::cout << "Character Copy constructor called" << std::endl << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}

	int i = -1;

	while (_ground[++i])
		delete _ground[i];
	std::cout << "Character Destructor called" << std::endl;
}

Character &	Character::operator=( const Character &rhs )
{
	std::cout << "Character Copy assignment operator called" << std::endl << std::endl;
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
				delete _inventory[i];
		}
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
		this->_name = rhs._name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	
	while (_inventory[i])
		i++;
	_inventory[i] = m;
	std::cout << this->_name << " has equiped " << m->getType() << " in the slot [" << i << "] of his inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (_inventory[idx] == NULL)
		return ;
	else
	{
		int i = 0;
		
		while (_ground[i])
		{
			i++;
			if (i == 10000)
			{
				std::cout << "The ground is already full of Materias, impossible to throw more on the ground. (Press F for the Planet...)" << std::endl;
				return ;	
			}
		}
		std::cout << this->_name << " has unequiped " << _inventory[idx]->getType() << " materia in the slot [" << idx << "] of his inventory" << std::endl;
		_ground[i] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx]) 
	{
		std::cout << _name;
        _inventory[idx]->use(target);
	}
	else
        std::cout << "Invalid index or empty slot." << std::endl;
}

AMateria* Character::_ground[10000];