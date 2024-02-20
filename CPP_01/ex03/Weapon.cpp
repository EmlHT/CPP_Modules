/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:36:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 17:45:29 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType( void ) const
{
    return (_type);
}

void    Weapon::setType( std::string _type)
{
    this->_type = _type;
}

Weapon::Weapon( std::string str) : _type(str)
{
    std::cout << "Constructor Weapon called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Destructor Weapon called" << std::endl;
}
