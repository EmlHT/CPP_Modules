/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:34:42 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/20 16:26:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string pName);
	~HumanB();

	void	attack( void );
	void	setWeapon( Weapon& pWeapon );
	
private:

	std::string	_name;
	Weapon*		_weapon;

};

#endif