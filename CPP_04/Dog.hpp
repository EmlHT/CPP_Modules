/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:30:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 13:44:03 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal {

	public :

	Dog( void );
	Dog( std::string name);
	Dog( const Dog &src);
	virtual ~Dog( void );

	Dog &	operator=( const Dog &rhs );

	void	getType( void ) const;

	void	makeSound() const;

};

#endif