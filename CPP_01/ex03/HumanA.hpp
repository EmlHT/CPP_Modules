/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:02:17 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 16:29:02 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string pName, Weapon& pWeapon );
	~HumanA();

	void	attack( void );

private :

	std::string	_name;
	Weapon&		_weapon;
};

#endif