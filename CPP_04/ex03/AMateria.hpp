/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:55:31 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 16:47:00 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	protected:

	std::string _type;

	public:

    AMateria(std::string const & type);
    AMateria( void );
	AMateria( const AMateria &src);
	virtual ~AMateria( void );

	AMateria &	operator=( const AMateria &rhs );

    std::string const & getType() const; //Returns the materia type

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif