/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:11:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/18 18:35:26 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {

	public :

	Animal( void );
	Animal( std::string ideas);
	Animal( const Animal &src);
	virtual ~Animal( void );

	Animal &	operator=( const Animal &rhs );

	std::string	getType( void ) const;
	void		setType( std::string type );

	virtual void	makeSound( void ) const;

	protected :

	std::string _type;

};

#endif