/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:37:28 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 14:48:37 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	Weapon( std::string str );
	~Weapon( void );

    void		setType( std::string _type);
    std::string	const &getType( void ) const;

private:

    std::string _type;

};

#endif