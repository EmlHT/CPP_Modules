/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:18 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/01 11:37:13 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class NotInTheList : public std::exception {
	public :
		virtual const char *what() const throw() {
			return ("Number not int the list");
		}
};

template <typename T>
void	easyfind(T list, int value)
{
	typename T::const_iterator	it = list.begin();
	typename T::const_iterator	ite = list.end();
	typename T::const_iterator	tmp = find(it, ite, value);
	if (tmp != ite)
		std::cout << distance(it, tmp) << std::endl;
	else
		throw NotInTheList();
}
