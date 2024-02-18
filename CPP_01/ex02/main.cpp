/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:55:08 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/16 09:28:04 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "MEMORY ADRESS of str = " << &str << std::endl;
	std::cout << "MEMORY ADRESS of *stringPTR = " << stringPTR << std::endl;
	std::cout << "MEMORY ADRESS of &stringREF = " << &stringREF << std::endl;

	std::cout << "VALUE of str = " << str << std::endl;
	std::cout << "VALUE of *stringPTR = " << *stringPTR << std::endl;
	std::cout << "VALUE of &stringREF = " << stringREF << std::endl;
}
