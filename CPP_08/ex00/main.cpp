/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:41:16 by ehouot            #+#    #+#             */
/*   Updated: 2024/04/30 19:23:49 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cmath>

int main()
{
	srand(time(NULL));
	std::list<int>	lst1;

	for (int i = 0; i < 10; i++)
		lst1.push_back(rand() % 4);

	std::cout << "Displaying list :" << std::endl;
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst1.end();
	for (it = lst1.begin(); it != ite; it++)
		std::cout << *it << " ";

	std::cout << std::endl;
	std::cout << "Display the occurence of " << 2 << " in the list at the index : ";
	try {
		std::cout << easyfind(lst1, 2) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Display the occurence of " << -1 << " in the list at the index : ";
	try {
		std::cout << easyfind(lst1, -1) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
