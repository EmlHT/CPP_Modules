/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:45:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 18:27:38 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {

	public :

	Cat( void );
	Cat( std::string name);
	Cat( const Cat &src);
	virtual ~Cat( void );

	Cat &	operator=( const Cat &rhs );

	virtual void	makeSound( void ) const;

};

#endif