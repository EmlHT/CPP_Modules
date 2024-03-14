/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:40:16 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/14 13:32:07 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Bot1;
    ClapTrap	Bot2("CLAUDY");
	ClapTrap	Bot3(Bot1);
	
	ScavTrap	Robot1;
	ScavTrap	Robot2("P-Body");
	ScavTrap	Robot3(Robot1);

    Bot2.setAttack(2);
	Bot2.attack(Bot1.getGlobal().name);
	Bot1.takeDamage(2);
	Bot2.beRepaired(2);
	Bot1.beRepaired(1);
    Bot3.beRepaired(1);
    Bot3.setAttack(10);
	Bot3.attack("CLAUDY");
	Bot2.takeDamage(10);

	Robot2.guardGate();
	Robot1.attack(Robot1.getGlobal().name);
	Robot1.attack(Robot1.getGlobal().name);
	Robot1.attack(Robot1.getGlobal().name);
	Robot1.attack(Robot1.getGlobal().name);
	Robot1.attack(Robot1.getGlobal().name);
	Robot2.takeDamage(100);
	Robot2.beRepaired(10);
	Robot2.guardGate();
	Robot1.beRepaired(1);
    Robot3.beRepaired(1);
	Robot3.attack("P-Body");
	Robot2.takeDamage(10);

	return(0);
}
