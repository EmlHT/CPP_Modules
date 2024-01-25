/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:41:58 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/25 15:01:50 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstring>

class Contact {

public:

	char	*firstname;
	char	*lastname;
	char	*nickname;
	char	*phonenumber;
	char	*darkest_secret;

	Contact(char *firstname, char *lastname, char *nickname, char *phonenumber, char *darkest_secret);
	~Contact(void);

};

#endif