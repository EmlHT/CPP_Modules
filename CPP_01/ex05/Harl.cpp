/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:13:14 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/27 14:15:51 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void	Harl::debug( void )
{
    std::cout << "DEBUG :" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "INFO :" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "WARNING :" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "ERROR :" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	void (Harl::*actions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	listLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i != 4; i++)
	{
		if (listLevel[i].compare(level) == 0)
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << "Not available entry" << std::endl;
}

Harl::Harl( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Harl::~Harl( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
