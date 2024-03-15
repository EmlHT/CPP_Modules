/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 14:49:19 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

public :

    Zombie( void );
    ~Zombie( void );
    
	void setName(std::string name);
    void announce( void );

    int _indexZ;
    
private :

    static int _nbZombie;
    std::string _name;
    
};

Zombie* zombieHorde( int N, std::string name );

#endif