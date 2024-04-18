/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:38:39 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/18 16:15:00 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer( const Serializer &src )
{
	*this = src;
	// std::cout << "Serializer Copy constructor called" << std::endl;
}

Serializer::~Serializer()
{
	// std::cout << "Serializer destructor called" << std::endl;
}

Serializer & Serializer::operator=( const Serializer &rhs )
{
    // std::cout << "Serializer Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
