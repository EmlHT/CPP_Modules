/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:37:28 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 15:02:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
//# include "HumanA.hpp"

class Weapon {

public:

	Weapon( std::string str );
	~Weapon( void );

    void		setType( std::string _type);
    std::string	getType( void ) const;

private:

    std::string _type;

};

#endif