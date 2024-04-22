/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:27:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/22 16:48:19 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template< typename T>

void    printArray(T index)
{
    std::cout << index << std::endl;
}

int main()
{
	std::string array1[] = {"ALORS", "COMMENT", "CA VA", "?"};
	int         array2[] = {1, 10, 3, 42, 0, 1999999};
	T			arrayT[] = new T[];
	iter(array1, 4, printArray());
	iter(array2, 6, printArray());
	iter(arrayT, , printArray());

	return 0;
}