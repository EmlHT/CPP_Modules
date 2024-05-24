/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:39:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/24 12:07:34 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <climits>

RPN::RPN( void )
{
}

RPN::RPN( const RPN &src )
{
	*this = src;
}

RPN::~RPN()
{
}

RPN &	RPN::operator=( const RPN &rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}
