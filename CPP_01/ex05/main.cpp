/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:30:06 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/26 14:57:51 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iomanip>
#include <limits>

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

int main()
{
	std::string level;
	Harl	Harl;

	std::cout << "Enter DEBUG, INFO, WARNING or ERROR" << std::endl;
	std::cout << "(Ctrl + D : Quit program)" << std::endl;
	while (1)
	{
		std::getline(std::cin, level);
		if (!cin_error())
			return (1);
		Harl.complain(level);	
	}
	return (0);
}
