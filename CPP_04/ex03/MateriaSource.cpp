/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:43:38 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/26 21:09:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &src )
{
	*this = src;
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] != NULL)
			delete _memory[i];
	}
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

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;

	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] != NULL)
		{
			this->_memory[i] = materia;
			std::cout << "New materia " << materia->getType() << "learned in the slot " << i << std::endl;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure")
	{
		std::cout << type << "is an unknown type" << std::endl;
		return 0;
	}
	else
	{
		for (int i = 3; i > -1; i--)
		{
			if (_memory[i] && _memory[i]->getType() == type)
			{
				AMateria* materia;
				if (type == "ice")
					materia = new Ice();
				else
					materia = new Cure();
				return (materia);
			}
		}
		std::cout << "The materia of type: " << type << " doesn't exist in memory" << std::endl;
		return (0);
	}
}
