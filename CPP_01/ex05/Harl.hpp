/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:14:27 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/15 14:43:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {

	public :

	Harl( void );
	~Harl();

	void	complain( std::string level );

	private :

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
