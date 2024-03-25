/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:44:32 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/25 17:01:46 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public AMateria
{
    public:

	MateriaSource(std::string const & name);
    MateriaSource( void );
	MateriaSource( const MateriaSource &src);
    virtual ~MateriaSource( void );

	MateriaSource &	operator=( const MateriaSource &rhs );

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif