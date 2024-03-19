/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:10:13 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/19 11:50:32 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* tab[4];
	
	for (int i = 0; i < 2; i++)
		tab[i] = new Cat();
	for (int i = 2; i < 4; i++)
		tab[i] = new Dog();
	for(int i = 0; i < 4; i++)
		std::cout << "Tab[" << i << "] : " << tab[i]->getType() << " " << std::endl;
	
	int i = 4;
	while (--i >= 0)
	{
		delete tab[i]; 
	}
	
	return 0;
}
