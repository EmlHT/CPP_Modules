/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:40:16 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/14 19:07:24 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Bot1;
    ClapTrap	Bot2("CLAUDY");
	ClapTrap	Bot3(Bot1);
	
	ScavTrap	Robot1;
	ScavTrap	Robot2("P-Body");
	ScavTrap	Robot3(Robot1);

	FragTrap	Robobot1;
	FragTrap	Robobot2("Atlas");
	FragTrap	Robobot3(Robobot1);

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

	Robobot2.highFivesGuys();
	Robobot1.attack(Robobot1.getGlobal().name);
	Robobot1.attack(Robobot1.getGlobal().name);
	Robobot1.attack(Robobot1.getGlobal().name);
	Robobot1.attack(Robobot1.getGlobal().name);
	Robobot1.attack(Robobot1.getGlobal().name);
	Robobot2.takeDamage(100);
	Robobot2.beRepaired(10);
	Robobot2.highFivesGuys();
	Robobot1.beRepaired(1);
    Robobot3.beRepaired(1);
	Robobot3.attack("Atlas");
	Robobot2.takeDamage(10);

	return(0);
}
