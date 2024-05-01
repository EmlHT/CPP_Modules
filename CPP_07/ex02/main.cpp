/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:27:20 by ehouot            #+#    #+#             */
/*   Updated: 2024/05/01 16:44:24 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"


int main()
{
	Array<int> arr1;
	Array<int> arr2(10);

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		try {
			arr2[i] = i;
			std::cout << "Value of index " << i << " in arr2 : " << arr2[i] << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "Try OOR exception : " << std::endl;
	for (unsigned int i = 0; i < arr2.size() + 1; i++)
	{
		try {
			std::cout << "Value of index " << i << " in arr2 : " << arr2[i] << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	Array<int> arr2Copy(arr2);
	std::cout << "Changing a value in one to see if they both change (musn't):" << std::endl;
	
	arr2[2] = 189;
	std::cout << "189 in original one :" << std::endl;
	std::cout << "Original one value : " << arr2[2] << std::endl;
	std::cout << "Copy one value : " << arr2Copy[2] << std::endl;
	
	arr2Copy[3] = 42;
	std::cout << "42 in copy one :" << std::endl;
	std::cout << "Copy one value : " << arr2Copy[3] << std::endl;
	std::cout << "Original one value : " << arr2[3] << std::endl;

	std::cout << "Test with char :" << std::endl;
	Array<char> arrChar(10);
	for (unsigned int i = 0; i < arrChar.size(); i++)
	{
		try {
			arrChar[i] = 'a' + i;
			std::cout << arrChar[i] << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}