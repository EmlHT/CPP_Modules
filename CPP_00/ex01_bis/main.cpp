/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:05:39 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/29 13:40:04 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

int main(int argc, char **argv) {

	std::string	input;
	Phonebook	repertory;
	int	i = 0;
	(void)argv;

	if (argc != 1)
	{
		std::cout << "\033[1;31mNo arguments accepted after the file .exe\033[0m" << std::endl;
		return (1);
	}
	while (i < 8)
	{
		std::cout << "\033[1;32mType an input : \"ADD\", \"SEARCH\" or \"EXIT\"\033[0m" << std::endl;
		std::getline(std::cin, input);
		if (!cin_error())
			return (1);
		if (input.compare("ADD") == 0)
		{
			if (!repertory.AddFunction(i))
				std::cout << "\033[1;31mError adding contact. Please try again.\033[0m" << std::endl;
			i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (!repertory.SearchFunction())
				std::cout << "\033[1;31mError searching contacts. Please try again.\033[0m" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "\033[1;35mExiting...\033[0m" << std::endl;
			return (0);
		}
		if (i == 8)
			i = 0;
	}
	return (0);
}
