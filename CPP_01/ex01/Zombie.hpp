/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/15 17:24:25 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public :

	Zombie( std::string name );
    Zombie( void );
    ~Zombie( void );
    
	void setName(std::string name);
    void announce( void );
    
private :

    std::string _name;
    
};

Zombie* zombieHorde( int N, std::string name );

#endif