/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:30:11 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 13:12:52 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"

class Dog : public AAnimal {

	public :

	Dog( void );
	Dog( std::string name);
	Dog( const Dog &src);
	virtual ~Dog( void );

	Dog &	operator=( const Dog &rhs );

	virtual void	makeSound( void ) const;

	private :

	Brain* _brain;

};

#endif