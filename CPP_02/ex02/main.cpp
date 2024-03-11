/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:01:40 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/11 17:51:41 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;		// 0
	std::cout << ++a << std::endl;		// 0.00390625
	std::cout << a << std::endl;		// 0.00390625
	std::cout << a++ << std::endl;		// 0.00390625
	std::cout << a << std::endl;		// 0.0078125

	std::cout << b << std::endl;		// 10.1016

	std::cout << Fixed::max( a, b ) << std::endl;	// 10.1016

	return 0;
}

// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016