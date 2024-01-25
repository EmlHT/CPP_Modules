/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:21:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/25 15:26:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook(void) {
    
    std::cout << "(Phonebook) Constructor called" << std::endl;
    return ;
}

Phonebook::~Phonebook(void) {
    
    std::cout << "(Phonebook) Destructor called" << std::endl;
    return ;
}

Contact Phonebook::SearchFunction(void) {

    
    
}

void    Phonebook::AddFunction(Phonebook repertory) {
    
    char    buff[2147483647];

    std::cout << "Adding a new contact, enter the following informations :" << std::endl;
    std::cout << "Firstname : ";
    std::cin >> buff;
    list.firstname = buff;
    std::cout << "Lastname : ";
    std::cin >> buff;
    list.lastname = buff;
    std::cout << "Nickname : ";
    std::cin >> buff;
    list.nickname = buff;
    std::cout << "Phone number : ";
    std::cin >> buff;
    list.phonenumber = buff;
    std::cout << "His darkest secret : ";
    std::cin >> buff;
    list.darkest_secret = buff;
}
