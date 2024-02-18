/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:27:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/16 08:36:12 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::_nbZombie = 0;

void    Zombie::setName( std::string name )
{
	this->_name = name;
}

Zombie::Zombie( void )
{
    _nbZombie++;
    _indexZ = _nbZombie;
    std::cout << _nbZombie << " zombie has been created" << std::endl;
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << "The zombie number " << _indexZ << " with the name " << this->_name << " has been destroyed" << std::endl;
    return ;
}

void	Zombie::announce( void )
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}