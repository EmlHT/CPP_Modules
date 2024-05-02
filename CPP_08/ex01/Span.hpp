/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:06:48 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/02 09:41:22 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
	public :

		Span( unsigned int N );
		Span( const Span &src );
		~Span();

		Span &	operator=( const Span &rhs );

		void	addNumber( int nb );
		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;
		void	displayVector( void ) const;
		void    moreNumbers( std::vector<int> newNumbers, unsigned int position );

		class VectorAlreadyFull : public std::exception {
			public :
				virtual const char *what() const throw();
		};
		class ZeroNumberFound : public std::exception {
			public :
				virtual const char *what() const throw();
		};
		class OneNumberFound : public std::exception {
			public :
				virtual const char *what() const throw();
		};

	private :

		Span();
		unsigned int		_N;
		std::vector<int>	_vec;
};
