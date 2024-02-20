/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:35:55 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 16:26:13 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon( Weapon& pWeapon )
{
	_weapon = &pWeapon;
}

void	HumanB::attack( void )
{
	if (_weapon == NULL)
			std::cout << _name << " attacks with their fists" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB( std::string pName ) : _name(pName), _weapon(NULL)
{
    std::cout << "Constructor HumanB called" << std::endl;
}

HumanB::~HumanB()
{
}