/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cin_error.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:17:23 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/29 13:22:12 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

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
