/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:22 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/24 13:46:48 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <fstream>
#include <string>

bool	cin_error(void) {

	if (std::cin.eof())
	{
		std::cout << "\033[1;35mEOF detected. Exiting...\033[0m" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (false);
	}
	if (std::cin.fail())
	{
		std::cout << "\033[1;35mError in input. Exiting...\033[0m" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (false);
	}
	return (true);
}

int main(int argc, char** argv)
{
	
}
