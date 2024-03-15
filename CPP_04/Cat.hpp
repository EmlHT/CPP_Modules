/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:45:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 13:45:50 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

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