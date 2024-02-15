/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/15 15:09:17 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public :

	Zombie( std::string name );
    // Zombie( void );
    ~Zombie( void );
    
    void announce( void );
    
private :

    std::string _name;
    
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif