/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:41:24 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/28 18:27:44 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {
    
    std::cout << "\033[1;34m(Contact)\033[0m Constructor called" << std::endl;
    return ;
}

Contact::~Contact(void) {
    
    std::cout << "\033[1;34m(Contact)\033[0m Destructor called" << std::endl;
    return ;
}

