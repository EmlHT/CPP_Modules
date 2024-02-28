/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:03:04 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/28 19:22:42 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{

	public :

	Fixed( void ); 							// Constructeur par defaut
	Fixed( int );
	Fixed( const Fixed &src ); 				// Constructeur par copie (une instance de Fixed en parametre pour copier cette class)
	~Fixed( void ); 						// Destructeur

	Fixed &	operator=( const Fixed &rhs ); // Operateur d'affectation/assignation

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	private :
	
	int			_value;
	const int	_constValue;

};


#endif
