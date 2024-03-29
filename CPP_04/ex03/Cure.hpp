/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:10:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 09:42:20 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public :
	
    Cure( void );
	Cure( const Cure &src);
	virtual ~Cure( void );

	Cure &	operator=( const Cure &rhs );

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif