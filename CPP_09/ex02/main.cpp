/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/29 15:11:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main(int argc, char** argv)
{
	PmergeMe	tri;
	
	if (argc > 2)
	{
		try {
			tri.parseInput(argv);
			tri.sortAndDisplay();
		}
		catch (std::exception &e) {
			std::cout << e.what() <<std::endl;
		}
	}
	else
		std::cout << "Error " <<std::endl;
	return 0;
}
