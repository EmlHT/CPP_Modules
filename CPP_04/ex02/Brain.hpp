/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:57:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/18 18:26:24 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

	public :

	Brain( void );
	Brain( const Brain &src);
	virtual ~Brain( void );

	Brain &	operator=( const Brain &rhs );

	std::string	getIdeas( void ) const;

	private :

	std::string _ideas[100];

};

#endif