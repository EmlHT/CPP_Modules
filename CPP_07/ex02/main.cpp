/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:27:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/27 19:57:46 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void    printInt(int const &index)
{
    std::cout << index << std::endl;
}

void    printString(std::string const &index)
{
    std::cout << index << std::endl;
}

int main()
{
	std::string array1[] = {"ALORS", "COMMENT", "CA VA", "?"};
	int         array2[] = {1, 10, 3, 42, 0, 1999999};

	iter(array1, 4, printString);

	std::cout << std::endl;
	
	iter(array2, 6, printInt);

	return 0;
}