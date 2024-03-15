/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:11:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 13:27:17 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	public :

	Animal( void );
	Animal( std::string name);
	Animal( const Animal &src);
	virtual ~Animal( void );

	Animal &	operator=( const Animal &rhs );

	void	getType( void ) const;

	void	makeSound() const;

	protected :

	std::string _type;

};

#endif