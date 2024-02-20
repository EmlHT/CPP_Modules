/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:03:53 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 15:47:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA( std::string pname, Weapon& pWeapon ) : _name(pname), _weapon(pWeapon)
{
    std::cout << "Constructor HumanA called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Destructor HumanA called" << std::endl;
}