/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:10:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/26 19:14:51 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
    Cure( void );
	Cure( const Cure &src);
	virtual ~Cure( void );

	Cure &	operator=( const Cure &rhs );

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif