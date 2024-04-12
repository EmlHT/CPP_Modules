/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:05:14 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/12 09:46:04 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter
{
	private :
	
	ScalarConverter();
	ScalarConverter( const ScalarConverter &src );
	~ScalarConverter();

	public:

	ScalarConverter &	operator=( const ScalarConverter &rhs );

	static void	convert( std::string &literal );

};