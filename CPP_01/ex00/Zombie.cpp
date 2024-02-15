/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:27:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/15 15:15:56 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
    std::cout << "The zombie " << this->_name << " has been created" << std::endl;
	return ;
}

// Zombie::Zombie( void )
// {
//     std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
// }

Zombie::~Zombie( void )
{
    std::cout << "The zombie " << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::announce( void )
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}