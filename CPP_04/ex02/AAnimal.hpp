/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:11:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 13:16:37 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal {

	public :

	AAnimal( void );
	AAnimal( std::string ideas);
	AAnimal( const AAnimal &src);
	virtual ~AAnimal( void );

	AAnimal &	operator=( const AAnimal &rhs );

	std::string	getType( void ) const;
	void		setType( std::string type );

	virtual void	makeSound( void ) const = 0;

	protected :

	std::string _type;

};

#endif