/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:43:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/25 17:02:16 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : AMateria("")
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource( std::string const &  name) : _name(name)
{
	std::cout << "MateriaSource Parametric constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &src ) : _name(src._name)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=( const MateriaSource &rhs )
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

void learnMateria(AMateria*)
{
	
}

AMateria* createMateria(std::string const & type)
{
	
}
