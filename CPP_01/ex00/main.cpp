/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:05:47 by ehouot            #+#    #+#             */
/*   Updated: 2024/02/15 16:18:42 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	monstre = newZombie("Hanmin");
	randomChump("Younes");
	monstre->announce();
	delete monstre;
	return (0);
}
