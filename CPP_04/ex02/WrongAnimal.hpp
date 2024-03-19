/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:11:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 18:50:17 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {

	public :

	WrongAnimal( void );
	WrongAnimal( std::string name);
	WrongAnimal( const WrongAnimal &src);
	virtual ~WrongAnimal( void );

	WrongAnimal &	operator=( const WrongAnimal &rhs );

	std::string	getType( void ) const;

	void	makeSound( void ) const;

	protected :

	std::string _type;

};

#endif