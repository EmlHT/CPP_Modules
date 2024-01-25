/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:23:35 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/25 15:26:08 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook {
	
public:

	Contact list[8];

	Phonebook(void);
	~Phonebook(void);
	void	AddFunction(Phonebook repertory);
	Contact	SearchFunction(Contact list, Contact search);
	
};


#endif