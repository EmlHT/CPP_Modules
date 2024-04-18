/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:48:52 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/18 16:35:13 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	private :

	Serializer();
	Serializer( const Serializer &src );
	Serializer &	operator=( const Serializer &rhs );
	~Serializer();

	public:

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};