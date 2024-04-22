/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:42:55 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/22 14:44:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T >
void	swap( T &a, T &b )
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T	min( T &a, T &b )
{
	return ((a < b) ? a : b);
}

template< typename T >
T	max( T &a, T &b )
{
	return ((a > b) ? a : b);
}
