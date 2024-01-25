/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:05:39 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/25 15:26:17 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include "phonebook.hpp"
#include "contact.hpp"

int main(int argc, char **argv)
{
	char		input[8];
	Phonebook	repertory;
	int			i = -1;
	(void)argv;

	if (argc != 1)
	{
		std::cout << "No arguments accepted after the file .exe" << std::endl;
		return (-1);
	}
	while (++i < 7)
	{
		std::cout << "Input \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
		std::cin >> input;
		if (strncmp(input, "ADD", 4) != 0)
			repertory.AddFunction(repertory);
		else if (strncmp(input, "SEARCH", 7) != 0)
			repertory.SearchFunction();
		else if (strncmp(input, "EXIT", 5) != 0)
			exit(0);
		if (i == 7)
			i = -1;
	}
	return (0);
}
