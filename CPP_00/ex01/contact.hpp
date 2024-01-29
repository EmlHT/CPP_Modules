/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:41:58 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/29 13:21:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstring>
#include <iostream>

class Contact {

public:

	char	firstname[256];
	char	lastname[256];
	char	nickname[256];
	char	phonenumber[256];
	char	darkest_secret[256];

	Contact(void);
	~Contact(void);

};

#endif
