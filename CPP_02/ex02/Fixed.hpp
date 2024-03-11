/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:03:04 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/11 13:54:15 by ehouot           ###   ########.fr       */
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

	Fixed &	operator=( const Fixed& rhs ); 			// Operateur d'affectation/assignation

	bool	operator>( const Fixed& rhs ) const;	// Operateur de comparaison superieur
	bool	operator<( const Fixed& rhs ) const;	// Operateur de comparaison inferieur
	bool	operator>=( const Fixed& rhs ) const;	// Operateur de comparaison superieur ou egal
	bool	operator<=( const Fixed& rhs ) const;	// Operateur de comparaison inferieur ou egal
	bool	operator==( const Fixed& rhs ) const;	// Operateur de comparaison egal
	bool	operator!=( const Fixed& rhs ) const;	// Operateur de comparaison different
	
	Fixed	operator+( const Fixed& rhs ) const; 	// Operateur d'addition
	Fixed	operator/( const Fixed& rhs ) const; 	// Operateur de division
	Fixed	operator-( const Fixed& rhs ) const; 	// Operateur de soustraction
	Fixed	operator*( const Fixed& rhs ) const; 	// Operateur de multiplication

	Fixed&	operator++();		// Operateur de pre-incrementation 
	Fixed& 	operator--();		// Operateur de pre-decrementation
	Fixed	operator++(int);	// Operateur de post-incrementation
	Fixed	operator--(int);	// Operateur de post-decrementation

	static Fixed	min( Fixed& a, Fixed& b );
	static Fixed const	min( const Fixed& a, const Fixed& b );
	static Fixed	max( Fixed& a, Fixed& b );
	static Fixed const	max( const Fixed& a, const Fixed& b );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int		toInt( void ) const;
	float	toFloat( void ) const;

	private :
	
	int					_value;
	static const int	_constValue;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif