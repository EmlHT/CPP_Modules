/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:36:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/18 02:09:23 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string& Weapon::getType( void )
{
    return (_type);
}

Weapon::Weapon( std::string str)
{
    std::cout << "Constructor called" << std::endl;
    this->_type = str;
}

Weapon::~Weapon()
{
    std::cout << "Destructor called" << std::endl;
}
