/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/30 19:26:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <list>

class NotInTheList : public std::exception {
	public :
		virtual const char *what() const throw() {
			return ("Number not int the list");
		}
};

template <typename T>
int	easyfind(T list, int value)
{
	int i = 0;
	typename T::const_iterator	it;
	typename T::const_iterator	ite = list.end();
	for (it = list.begin(); it != ite; it++)
	{
		if (*it == value)
			return i;
		i++;
	}
	throw NotInTheList();
	return -1;
}
