/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:40:16 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/13 12:17:20 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Bot1;
    ClapTrap	Bot2("CLAUDY");
	ClapTrap	Bot3(Bot1);

    Bot2.setAttack(2);
	Bot2.attack(Bot1.getGlobal().name);
	Bot1.takeDamage(2);
	Bot2.beRepaired(2);
	Bot1.beRepaired(1);
    Bot3.beRepaired(1);
    Bot3.setAttack(10);
	Bot3.attack("CLAUDY");
	Bot2.takeDamage(10);

	return(0);
}
