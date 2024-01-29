/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:23:35 by ehouot            #+#    #+#             */
/*   Updated: 2024/01/29 12:54:26 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "common.hpp"

class Phonebook {
	
public:

	Contact list[8];

	Phonebook(void);
	~Phonebook(void);
	bool	AddFunction(int i);
	bool	SearchFunction(void);

private:

	bool	FindIndex(int i);

};

#endif