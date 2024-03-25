/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:29:29 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/25 16:50:00 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    public:

	Character(std::string const & name);
    Character( void );
	Character( const Character &src);
	virtual ~Character( void );
	
	Character &	operator=( const Character &rhs );

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);

	private :

	std::string 		_name;
	AMateria*			_inventory[4];
	static AMateria*	_ground[10000];
};

#endif