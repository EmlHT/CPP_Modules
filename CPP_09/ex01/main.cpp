/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/28 12:00:31 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int main(int argc, char** argv)
{
	RPN	stack;
	if (argc == 2)
	{
		std::string	input = argv[1];
		try {
			stack.parseInput(input);
			stack.fillStack(input);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Error" <<std::endl;
	return 0;
}
