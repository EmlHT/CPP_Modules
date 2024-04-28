/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:49:13 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/28 15:55:39 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template < typename T = unsigned int >
class Array
{
	public :

	Array();
	Array(unsigned int n);
	Array(const Array &src);
	~Array();

	Array &	operator=( const Array &rhs );

	private :

	T	_elements;
};
