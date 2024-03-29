/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 09:40:40 by ehouot            #+#    #+#             */
/*   Updated: 2024/03/29 11:27:55 by ehouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(1);
    ICharacter* RENE = new Character("RENE");
    RENE->equip(tmp);
    RENE->unequip(2);
    RENE->unequip(0);
    RENE->use(0, *me);
    ICharacter* bob = new Character("bob");
    ICharacter* emilien;
    emilien = bob;
    me->use(0, *bob);
    me->use(1, *emilien);


    std::cout << std::endl;
    delete tmp;
    delete emilien;
    delete me;
    delete src;
    return 0;
}