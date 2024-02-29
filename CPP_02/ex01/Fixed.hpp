/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:03:04 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/29 15:10:01 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <ostream>
# include <cmath>

class	Fixed{

	public :

	Fixed( void ); 							// Constructeur par defaut
	Fixed( const int );						// Constructeur par parametre const int
	Fixed( const float );					// Constructeur par parametre const float
	Fixed( const Fixed &src ); 				// Constructeur par copie (une instance de Fixed en parametre pour copier cette class)
	~Fixed( void ); 						// Destructeur

	Fixed &	operator=( const Fixed &rhs ); // Operateur d'affectation/assignation

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int		toInt( void ) const;
	float	toFloat( void ) const;

	private :
	
	int			_value;
	static const int	_constValue;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif
