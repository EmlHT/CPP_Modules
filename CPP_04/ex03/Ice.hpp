/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:24:17 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 09:42:10 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :
	
    Ice( void );
	Ice( const Ice &src);
	virtual ~Ice( void );

	Ice &	operator=( const Ice &rhs );

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif