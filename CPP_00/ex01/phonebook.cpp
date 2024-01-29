/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:21:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/29 13:14:07 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

Phonebook::Phonebook(void) {

	for (int i = 0; i < 8; ++i) {
		strcpy(list[i].firstname, "");
		strcpy(list[i].lastname, "");
		strcpy(list[i].nickname, "");
		strcpy(list[i].phonenumber, "");
		strcpy(list[i].darkest_secret, "");
	}
    std::cout << "\033[1;34m(Phonebook)\033[0m Constructor called" << std::endl;
    return ;
}

Phonebook::~Phonebook(void) {
    
    std::cout << "\033[1;34m(Phonebook)\033[0m Destructor called" << std::endl;
    return ;
}

bool	Phonebook::FindIndex(int i) {
	char	entry[256];
	int		index;
	
	std::cout << "\033[1;33mIndex of the wanted contact : \033[0m";
	if (!cin_error(entry, sizeof(entry)))
		return (false);
	index = std::atoi(entry);
	for (int j = 0; entry[j] != '\0'; j++)
	{
		if (!std::isdigit(entry[j]))
		{
			std::cout << "\033[1;33mPlease, enter a number\033[0m" << std::endl;
			return (false);
		}
	}
	if (index >= i || index < 0 || !entry[0])
	{
		std::cout << "\033[1;31mPlease enter a valid index between 0 and \033[0m" << (i - 1) << std::endl;
		return (false);
	}
	std::cout << "\033[1;36mFirstname :\033[0m "<< list[index].firstname << std::endl;
	std::cout << "\033[1;36mLastname :\033[0m "<< list[index].lastname << std::endl;
	std::cout << "\033[1;36mNickname :\033[0m "<< list[index].nickname << std::endl;
	std::cout << "\033[1;36mPhone number :\033[0m "<< list[index].phonenumber << std::endl;
	std::cout << "\033[1;36mHis darkest secret :\033[0m "<< list[index].darkest_secret << std::endl;
	return (true);
}

bool	Phonebook::SearchFunction(void) {

	char	buff_first[11];
	char	buff_last[11];
	char	buff_nick[11];
	int		i;

	if (list[0].firstname[0] == '\0')
	{
		std::cout << "\033[1;31mThere is no contact registered. Please ADD a contact before SEARCH\033[0m" << std::endl;
		return (false);
	}
	for (i = 0; i < 8 && list[i].firstname[0] != '\0'; i++)
	{
		std::memmove(buff_first, list[i].firstname, 10);
		if (std::strlen(list[i].firstname) > 10)
		{
			buff_first[9] = '.';
			buff_first[10] = '\0';
		}
		std::memmove(buff_last, list[i].lastname, 10);
		if (std::strlen(list[i].lastname) > 10)
		{
			buff_last[9] = '.';
			buff_last[10] = '\0';
		}
		std::memmove(buff_nick, list[i].nickname, 10);
		if (std::strlen(list[i].nickname) > 10)
		{
			buff_nick[9] = '.';
			buff_nick[10] = '\0';
		}
		std::cout << std::setw(10) << i << " | "
				  << std::setw(10) << buff_first << " | "
				  << std::setw(10) << buff_last << " | "
				  << std::setw(10) << buff_nick << std::endl;
	}
	FindIndex(i);
	return (true);
}

bool    Phonebook::AddFunction(int i) {

	bool	isValidNumber;
	bool	isValidFirst;
	bool	isValidLast;

	std::cout << "\033[1;33mAdding a new contact, enter the following informations (256 characters max for each) :\033[0m" << std::endl;

	do {
		std::cout << "\033[1;36mFirstname : \033[0m";
		if (!cin_error(list[i].firstname, sizeof(list[i].firstname)))
			return (false);
		isValidFirst = true;
		for (int j = 0; list[i].firstname[j] != '\0'; ++j)
		{
			if (std::isdigit(list[i].firstname[j]))
			{
				isValidFirst = false;
				std::cout << "\033[1;31mInvalid first name. Please, enter a correct name.\033[0m" << std::endl;
				break ;
			}
		}
	} while (std::strlen(list[i].firstname) == 0 || !isValidFirst);
	
	do {
		std::cout << "\033[1;36mLastname : \033[0m";
		if (!cin_error(list[i].lastname, sizeof(list[i].lastname)))
			return (false);
		isValidLast = true;
		for (int j = 0; list[i].lastname[j] != '\0'; ++j)
		{
			if (std::isdigit(list[i].lastname[j]))
			{
				isValidLast = false;
				std::cout << "\033[1;31mInvalid last name. Please, enter a correct name.\033[0m" << std::endl;
				break ;
			}
		}
	} while (std::strlen(list[i].lastname) == 0 || !isValidLast);
	
	do {
		std::cout << "\033[1;36mNickname : \033[0m";
		if (!cin_error(list[i].nickname, sizeof(list[i].nickname)))
			return (false);
	} while (std::strlen(list[i].nickname) == 0);
	
	do {
		std::cout << "\033[1;36mPhone number (e.g : 0680XXXXXX) : \033[0m";
		if (!cin_error(list[i].phonenumber, sizeof(list[i].phonenumber)))
			return (false);
		isValidNumber = true;
		for (int j = 0; list[i].phonenumber[j] != '\0'; ++j)
		{
			if (!std::isdigit(list[i].phonenumber[j]))
			{
				isValidNumber = false;
				std::cout << "\033[1;31mInvalid phone number. Please, enter a valid number.\033[0m" << std::endl;
				break ;
			}
		}
	} while (std::strlen(list[i].phonenumber) == 0 || !isValidNumber);
	
	do {
		std::cout << "\033[1;36mHis darkest secret : \033[0m";
		if (!cin_error(list[i].darkest_secret, sizeof(list[i].darkest_secret)))
			return (false);
	} while (std::strlen(list[i].darkest_secret) == 0);
	
	return (true);
}
