/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 07:39:30 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/22 08:36:53 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

Base    *generate(void)
{
	Base *tmp = NULL;
    int random = rand() % 3;
    switch (random)
    {
		case 0:
			tmp = new A;
			break;
		case 1:
			tmp = new B;
			break;
		case 2:
			tmp = new C;
			break;
		default:
			std::cout << "rand problem" << std::endl;
			break;
    }
	return tmp;
}

void    identify(Base* p)
{
	std::cout << "Indentification by pointer : ";
	if (dynamic_cast<A *>(p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "class C" << std::endl;
	else
		std::cout << "p isn't an available class" << std::endl;
}

void    identify(Base& p)
{
	std::cout << "Indentification by reference : ";
	try {
			(void)dynamic_cast<A&>(p);
			std::cout << "class A" << std::endl;
	} catch (std::exception &e) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "class B" << std::endl;
		} catch (std::exception &e2) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "class C" << std::endl;
			} catch (std::exception &e3) {
				std::cout << "p isn't an available class. " << e3.what() << std::endl;
			}	
		}
	}	
}

int main()
{
    srand (time(NULL));
	
	Base* rd = generate();
	identify(rd);
	identify(*rd);
	identify(NULL);

	delete rd;
	return 0;	
}
