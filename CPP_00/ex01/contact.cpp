/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:41:24 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/25 14:59:06 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(char *firstname, char *lastname, char *nickname, char *phonenumber, char *darkest_secret) {
    
    std::cout << "(Contact) Constructor called" << std::endl;
    return ;
}

Contact::~Contact(void) {
    
    std::cout << "(Contact) Destructor called" << std::endl;
    return ;
}