/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:06:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/30 20:36:29 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <map>

class Span
{
	public :
		
		Span( unsigned int N );
		Span( const Span &src );
		~Span();

		Span &	operator=( const Span &rhs );

		addNumber();
		shortestSpan();
		longestSpan();

		class MapAlreadyFull : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("The map is already full");
				}
		};
		class ZeroNumberFound : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("No number in stock");
				}
		};
		class OneNumberFound : public std::exception {
			public :
				virtual const char *what() const throw() {
					return ("Just one number in stock");
				}
		};
		
	private :

		Span();
		unsigned int	_N;	
};
