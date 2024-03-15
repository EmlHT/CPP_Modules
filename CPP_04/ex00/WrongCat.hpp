/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:45:34 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 18:50:09 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public :

	WrongCat( void );
	WrongCat( std::string name);
	WrongCat( const WrongCat &src);
	virtual ~WrongCat( void );

	WrongCat &	operator=( const WrongCat &rhs );

	void	makeSound( void ) const;

};

#endif